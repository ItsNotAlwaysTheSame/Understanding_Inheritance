#include "cyliner.h"

cyliner::cyliner(float H, float r, std::string C): circle(r, C), hei(H), col(C)
{}

float cyliner::getArea() const
{
    float ci=circle::getArea();
    float ra=circle::radius;
    return ((2*M_pi*ra*hei)+ 2*ci);
}

std::string cyliner::GetColour() const
{
    return col;
}

float cyliner::getVolume() const
{
    float ci=circle::getArea();
    return ci*hei;
}