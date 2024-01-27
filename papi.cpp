#include "papi.h"

papi::papi(float wid, float he, float leng, std::string C): rectangle(wid, he, C), L(leng), col(C), shape(C)
{}

float papi::getArea() const 
{
    float A=rectangle.getArea();
    float H= rectangle.height;
    float W=rectangle.width;
    return (2*(A+ (L*H)+(L+W)));
}

float papi::getVolume() const 
{
    float A=rectangle.getArea();
    return L*A;
}

std::string papi::GetColour() const
{
    return col;
}
