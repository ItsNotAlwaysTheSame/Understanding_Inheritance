#ifndef RECT_H
#define RECT_H
#include "shape.h"

class rect : public shape
{
public:
    rect(float W, float H, std::string C);
    float getArea() const override; 
    float width, height;
    std::string colour;
};



#endif


