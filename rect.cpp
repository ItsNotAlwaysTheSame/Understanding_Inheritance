

#include "rect.h"

rect::rect(float W, float H, std::string C): width(W), height(H), colour(C), shape(C)
{
}

float rect::getArea() const
{
    return width*height;
}


