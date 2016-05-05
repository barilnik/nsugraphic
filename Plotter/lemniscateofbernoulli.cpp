#include "lemniscate.h"

LemniscateOfBernoulli::LemniscateOfBernoulli( QObject *parent ) : QObject( parent )
{
    X1 = DEFAULT_X1;
    X2 = DEFAULT_X2;
    Y1 = DEFAULT_Y1;
    Y2 = DEFAULT_Y2;
    radius = DEFAULT_RADIUS;
}

void LemniscateOfBernoulli::changedX1 (int x )
{
    if(X1 != x)
    {
        X1 = x;
        valueChangedX1( x );
        repaint();
    }
}

void LemniscateOfBernoulli::changedX2( int x )
{
    if( X2 != x )
    {
        X2 = x;
        valueChangedX2( x ) ;
        repaint();
    }
}

void LemniscateOfBernoulli::changedY1( int y )
{
    if( Y1 != y )
    {
        Y1 = y;
        valueChangedY1( y );
        repaint();
    }
}

void LemniscateOfBernoulli::changedY2( int y )
{
    if( Y2 != y )
    {
        Y2 = y;
        valueChangedY2( y );
        repaint();
    }
}

void LemniscateOfBernoulli::changedR( int newr )
{
    if( radius != newr )
    {
        radius = newr;
        valueChangedRadius( newr );
        repaint();
    }
}

long long LemniscateOfBernoulli::calculateError( int x, int y )
{
    //long long error = ((x - X1)*(x - X1) + (y - Y1)*(y - Y1))*
    // ((x - X2)*(x - X2) + (y - Y2)*(y -Y2)) - R*R*R*R;
    long long error = (pow(x - X1, 2) + pow(y - Y1, 2))
            * (pow(x - X2, 2) + pow(y - Y2, 2)) - pow(radius, 4);
    return error;
}
void LemniscateOfBernoulli::findStart( int *x, int *y )
{
    int rx = X1;
    int ry = Y1;
    int lx =(X1-X2)*2 + X2;
    int ly =(Y1-Y2)*2 + Y2;
    if(lx == rx && ly == ry) lx++;

    while(calculateError(lx, ly) < 0) {
        rx = lx;
        ry = ly;
        lx = (lx - X2)*2 + X2;
        ly = (ly - Y2)*2 + Y2;
    }
    while((rx - lx)*(rx - lx) +  (ry - ly)*(ry - ly) > 2) {
        int cx = (rx + lx)/2;
        int cy = (ry + ly)/2;
        if (calculateError(cx, cy) <= 0) {
            rx = cx;
            ry = cy;
        } else {
            lx = cx;
            ly = cy;
        }
    }
    if(abs(calculateError(lx, ly)) < abs(calculateError(rx, ry))){
        *x =lx;
        *y =ly;
    }else{
        *x =rx;
        *y =ry;
    }
}
int LemniscateOfBernoulli::round( float x )
{
    return( int )( x + 0.5 );
}

void LemniscateOfBernoulli::paintOval( QImage* pBackBuffer )
{
    uchar* pubBuffer = pBackBuffer->bits();
    int x = 0;
    int y = 0;
    float h = pBackBuffer->height();
    float w = pBackBuffer->width();

    findStart(&x, &y);

    int startX = x;
    int startY = y;

    std::vector<std::pair<int,int> > variants(0);
    variants.push_back(std::pair<int,int>(-1, 0));
    variants.push_back(std::pair<int,int>(1, 0));
    variants.push_back(std::pair<int,int>(0, 1));
    variants.push_back(std::pair<int,int>(0, -1));


    std::vector<std::pair<std::pair<int,int>,long long> > points(0);
    bool parallelFlagFirst = false;
    bool ortogonalFlagFirst = false;
    bool ortogonalFlag = false;
    bool parallelFlag = false;

    std::pair<int,int> lastStep = std::make_pair<int,int>(0, 0);
    std::pair<int,int> firstStep = lastStep;

    for(int i = 1; i <= 4; i++) {
        lastStep = std::make_pair<int,int>(0, 0);
        if(i == 3) {
            firstStep = lastStep;
            startX = (X1 + X2 - startX);
            startY = (Y1 + Y2 - startY);
        }
        x = startX;
        y = startY;
        do {
            if(round(h/2) - y < h && round(h/2) - y >= 0 && round(w/2) + x < w && round(w/2) + x >= 0){
                memset(pubBuffer + (round(h/2) - y) * pBackBuffer->bytesPerLine() + 3 * (round(w/2) + x),0, 3*sizeof(uchar));
            }
            points.clear();

            bool isPoint = calculateError(x + 2 * variants[0].first, y + 2 * variants[0].second) > 0;
            isPoint = isPoint && calculateError(x + 2 * variants[1].first, y + 2 * variants[1].second) > 0;
            isPoint = isPoint && calculateError(x + 2 * variants[2].first, y + 2 * variants[2].second) > 0;
            isPoint = isPoint  && calculateError(x + 2 * variants[3].first, y + 2 * variants[3].second) > 0;

            if(isPoint) break;


            for(int index = 0; index<variants.size(); index++) {
                if(variants[index].first != -lastStep.first || variants[index].second != -lastStep.second) {
                    if(!(lastStep.first == 0 && lastStep.second == 0 && firstStep.first == variants[index].first
                         && firstStep.second == variants[index].second)) {
                        points.push_back(std::pair<std::pair<int,int>,int>(variants[index],
                                                                           abs(calculateError(x + variants[index].first,
                                                                                              y + variants[index].second))));
                    }
                }
            }

            std::pair<std::pair<int,int>,long long> min = points[0];
            for (int i=1;i<points.size();i++){
                if (points[i].second<min.second){
                    min = points[i];
                }
            }

            if(lastStep.first == 0 && lastStep.second == 0) {
                firstStep = min.first;
                ortogonalFlagFirst = (2 * startX - X1 - X2)* (2 * (x + firstStep.first) - X1 - X2)+ (2 * startY - Y1 - Y2)
                        * (2 * (y + firstStep.second) - Y1 - Y2) < 0;

                parallelFlagFirst = (2 * startX - X1 - X2)* (2 * (y + firstStep.second) - Y1 - Y2)- (2 * startY - Y1 - Y2)
                        * (2 * (x +firstStep.first) - X1 - X2) < 0;
            }
            lastStep = min.first;
            x += lastStep.first;
            y += lastStep.second;
            ortogonalFlag = (2 * startX - X1 - X2) * (2 * x - X1 - X2)
                    + (2 * startY - Y1 - Y2) * (2 * y - Y1 - Y2)<0;
            parallelFlag = (2 * startX - X1 - X2) * (2 * y - Y1 - Y2)
                    - (2 * startY - Y1 - Y2) * (2 * x - X1 - X2)<0;

        } while(ortogonalFlag == ortogonalFlagFirst && parallelFlag == parallelFlagFirst);
    }
}
int LemniscateOfBernoulli::getY2() const
{
    return Y2;
}
int LemniscateOfBernoulli::getY1() const
{
    return Y1;
}
int LemniscateOfBernoulli::getX2() const
{
    return X2;
}
int LemniscateOfBernoulli::getX1() const
{
    return X1;
}

void LemniscateOfBernoulli::Draw( QImage* pBackBuffer )
{
    if (!pBackBuffer) {
        return;
    }

    uchar* pubBuffer = pBackBuffer->bits();
    memset(pubBuffer, 255, pBackBuffer->byteCount());

    int h = pBackBuffer->height();
    int w = pBackBuffer->width();

    for(int index = 0; index < w; index++ ) {
        memset(pubBuffer + h/2*pBackBuffer->bytesPerLine() + 3 * index,255,sizeof(uchar));
        memset(pubBuffer + h/2*pBackBuffer->bytesPerLine() + 3 * index + 1, 0, 2*sizeof(uchar));
    }
    for(int index = 0; index < h; index++ ) {
        memset(pubBuffer + index*pBackBuffer->bytesPerLine() + 3 * w/2,255,sizeof(uchar));
        memset(pubBuffer + index*pBackBuffer->bytesPerLine() + 3 * w/2 + 1, 0, 2*sizeof(uchar));
    }

    //paint focus 1&2
    if(X1 + w/2 > 2 && X1 + w/2 < w-2
            && Y1 + h/2 > 2 && h/2 + Y1 < h-2) {
        for(int i = X1 + w/2-2; i < X1 + w/2 + 2; i++ ) {
            for(int j = -Y1 +h/2 -2; j<-Y1+h/2+2; j++) {
                memset(pubBuffer + j * pBackBuffer->bytesPerLine() + 3 * i, 255, sizeof(uchar));
                memset(pubBuffer + j * pBackBuffer->bytesPerLine() + 3 * i + 1, 0, 2 * sizeof(uchar));
            }
        }
    }
    if(X2 + w/2 > 2 && X2 + w/2 < w-2
            && Y2 + h/2 > 2 && h/2 + Y2 < h-2) {
        for(int i = X2 + w/2-2; i < X2 + w/2 + 2; i++ ) {
            for(int j = -Y2 + h/2 -2; j< -Y2 + h/2 + 2; j++) {
                memset(pubBuffer + j * pBackBuffer->bytesPerLine() + 3 * i, 255, sizeof(uchar));
                memset(pubBuffer + j * pBackBuffer->bytesPerLine() + 3 * i + 1, 0, 2 * sizeof(uchar));
            }
        }
    }
    paintOval(pBackBuffer);
}
