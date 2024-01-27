#ifndef CYLINDER_H
#define CYLINDER_H

#include "circle.h"

class cyliner : public circle
{
public:
    cyliner(float H, float r, std::string C);
    float hei;
    float getVolume() const;
    float getArea() const;
    std::string col;
};

#endif