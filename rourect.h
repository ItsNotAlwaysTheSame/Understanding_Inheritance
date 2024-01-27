#ifndef ROURECT_H
#define ROURECT_H
#include "circle.h"
#include "rect.h"
#include <cmath>
class rourect: public rect
{
public:
    rourect(rect rectangle, double ra, std::string col);
    float getArea() const override;
    std::string col;

private:
    double ra;
};


#endif