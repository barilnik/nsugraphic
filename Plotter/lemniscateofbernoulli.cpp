#include "lemniscate.h"

Lemniscate::Lemniscate( QObject *parent ) : QObject( parent )
{
    positionX1 = -10;
    positionX2 = 10;
    positionY1 = 0;
    positionY2 = 0;
    positionRadius = 10;
}

Lemniscate::~Lemniscate()
{

}

void Lemniscate::changeX1( int x )
{
    if( positionX1 != x )
    {
        positionX1 = x;
        valueChangedX1( x );
        repaint();
    }
}

void Lemniscate::changeX2( int x )
{
    if( positionX2 != x )
    {
        positionX2 = x;
        valueChangedX2( x );
        repaint();
    }
}

void Lemniscate::changeY1( int y )
{
    if( positionY1 != y )
    {
        positionY1 = y;
        valueChangedY1( y );
        repaint();
    }
}

void Lemniscate::changeY2( int y )
{
    if( positionY2 != y )
    {
        positionY2 = y;
        valueChangedY2( y );
        repaint();
    }
}

void Lemniscate::changeRadius( int newRadius )
{
    if( positionRadius != newRadius )
    {
        positionRadius = newRadius;
        valueChangedRadius( newRadius );
        repaint();
    }
}

long long Lemniscate::calculateError( int x, int y )
{
    long long error =   ( pow( x - positionX1, 2 ) +
                        pow( y - positionY1, 2 ) )*
                        ( pow( x - positionX2, 2 ) +
                         pow(  y - positionY2, 2 ) ) -
                        pow( positionRadius, 4 );

    return error;
}
void Lemniscate::findStart( int *x, int *y )
{
    int rx = positionX1;
    int ry = positionY1;
    int lx = ( positionX1 - positionX2 ) * 2 + positionX2;
    int ly = ( positionY1 - positionY2 ) * 2 + positionY2;

    if( lx == rx && ly == ry )
    {
        lx++;
    }


    while( calculateError( lx, ly ) < 0 )
    {
        rx = lx;
        ry = ly;
        lx = ( lx - positionX2 ) * 2 + positionX2;
        ly = ( ly - positionY2 ) * 2 + positionY2;
    }

    while( ( rx - lx ) * ( rx - lx ) + ( ry - ly ) * ( ry - ly ) > 2 )
    {
        int cx = ( rx + lx ) / 2;
        int cy = ( ry + ly ) / 2;
        if( calculateError( cx, cy ) <= 0 )
        {
            rx = cx;
            ry = cy;
        }
        else
        {
            lx = cx;
            ly = cy;
        }
    }

    if( abs( calculateError( lx, ly ) ) < abs( calculateError( rx, ry ) ) )
    {
        *x =lx;
        *y =ly;
    }
    else
    {
        *x =rx;
        *y =ry;
    }
}
int Lemniscate::round(float x)
{
    return ( int )( x + 0.5 );
}
void Lemniscate::paintOval( QImage* pBackBuffer )
{
    uchar* pubBuffer = pBackBuffer->bits();
    int x = 0;
    int y = 0;
    float h = pBackBuffer->height();
    float w = pBackBuffer->width();

    findStart(&x, &y);

    int startX = x;
    int startY = y;

    std::vector< std::pair< int,int > > variants( 0 );
    variants.push_back( std::pair< int, int >( -1, 0 ) );
    variants.push_back( std::pair< int, int >( 1, 0 ) );
    variants.push_back( std::pair< int, int >( 0, 1 ) );
    variants.push_back( std::pair< int, int >( 0, -1 ) );


    std::vector< std::pair< std::pair< int,int >, long long > > points( 0 );
    bool parallelFlagFirst = false;
    bool ortogonalFlagFirst = false;
    bool ortogonalFlag = false;
    bool parallelFlag = false;

    std::pair< int,int > lastStep = std::make_pair< int, int >( 0, 0 );
    std::pair< int,int > firstStep = lastStep;

    for( int i = 1; i <= 4; i++ )
    {
        lastStep = std::make_pair<int,int>(0, 0);
        if(i == 3) {
            firstStep = lastStep;
            startX = (positionX1 + positionX2 - startX);
            startY = (positionY1 + positionY2 - startY);
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
                ortogonalFlagFirst = (2 * startX - positionX1 - positionX2)* (2 * (x + firstStep.first) - positionX1 - positionX2)+ (2 * startY - positionY1 - positionY2)
                        * (2 * (y + firstStep.second) - positionY1 - positionY2) < 0;

                parallelFlagFirst = (2 * startX - positionX1 - positionX2)* (2 * (y + firstStep.second) - positionY1 - positionY2)- (2 * startY - positionY1 - positionY2)
                        * (2 * (x +firstStep.first) - positionX1 - positionX2) < 0;
            }
            lastStep = min.first;
            x += lastStep.first;
            y += lastStep.second;
            ortogonalFlag = (2 * startX - positionX1 - positionX2) * (2 * x - positionX1 - positionX2)
                    + (2 * startY - positionY1 - positionY2) * (2 * y - positionY1 - positionY2)<0;
            parallelFlag = (2 * startX - positionX1 - positionX2) * (2 * y - positionY1 - positionY2)
                    - (2 * startY - positionY1 - positionY2) * (2 * x - positionX1 - positionX2)<0;

        } while(ortogonalFlag == ortogonalFlagFirst && parallelFlag == parallelFlagFirst);
    }
}
int Lemniscate::getY2() const
{
    return positionY2;
}
int Lemniscate::getY1() const
{
    return positionY1;
}
int Lemniscate::getX2() const
{
    return positionX2;
}
int Lemniscate::getX1() const
{
    return positionX1;
}

void Lemniscate::draw( QImage* pBackBuffer )
{
    if( !pBackBuffer )
    {
        return;
    }

    uchar* pubBuffer = pBackBuffer->bits();
    memset(pubBuffer, 255, pBackBuffer->byteCount());

    int h = pBackBuffer->height();
    int w = pBackBuffer->width();

    for(int index = 0; index < w; index++ )
    {
        memset(pubBuffer + h/2*pBackBuffer->bytesPerLine() + 3 * index,255,sizeof(uchar));
        memset(pubBuffer + h/2*pBackBuffer->bytesPerLine() + 3 * index + 1, 0, 2*sizeof(uchar));
    }
    for(int index = 0; index < h; index++ )
    {
        memset(pubBuffer + index*pBackBuffer->bytesPerLine() + 3 * w/2,255,sizeof(uchar));
        memset(pubBuffer + index*pBackBuffer->bytesPerLine() + 3 * w/2 + 1, 0, 2*sizeof(uchar));
    }

    //paint focus
    if(positionX1 + w/2 > 2 && positionX1 + w/2 < w-2
            && positionY1 + h/2 > 2 && h/2 + positionY1 < h-2)
    {
        for(int i = positionX1 + w/2-2; i < positionX1 + w/2 + 2; i++ )
        {
            for(int j = -positionY1 +h/2 -2; j<-positionY1+h/2+2; j++)
            {
                memset(pubBuffer + j * pBackBuffer->bytesPerLine() + 3 * i, 255, sizeof(uchar));
                memset(pubBuffer + j * pBackBuffer->bytesPerLine() + 3 * i + 1, 0, 2 * sizeof(uchar));
            }
        }
    }
    if(positionX2 + w/2 > 2 && positionX2 + w/2 < w-2
            && positionY2 + h/2 > 2 && h/2 + positionY2 < h-2)
    {
        for(int i = positionX2 + w/2-2; i < positionX2 + w/2 + 2; i++ )
        {
            for(int j = -positionY2 + h/2 -2; j< -positionY2 + h/2 + 2; j++)
            {
                memset(pubBuffer + j * pBackBuffer->bytesPerLine() + 3 * i, 255, sizeof(uchar));
                memset(pubBuffer + j * pBackBuffer->bytesPerLine() + 3 * i + 1, 0, 2 * sizeof(uchar));
            }
        }
    }
    paintOval(pBackBuffer);
}
