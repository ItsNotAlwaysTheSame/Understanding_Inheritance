#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"
#include <numbers>
class circle : public shape //inherits  from shape class
{   //so it hass access to all of its public and protected functions
public:
    circle(float r, std::string C);
    float getArea() const;
    float radius;
    std::string colour;
};


#endif