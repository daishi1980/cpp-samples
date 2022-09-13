#include "SamplePoint.h"

SamplePoint::SamplePoint(int x, int y)
    : _x(x), _y(y)
{

}
int SamplePoint::GetX()
{
    return _x;
}
int SamplePoint::GetY()
{
    return _y;
}
