#include "rourect.h"

rourect::rourect(rect rectangle, double ra, std::string col): rect(rectangle), ra(ra), col(col)
{

}

float rourect::getArea() const
{
    float rec = rect::getArea();
    return rec - pow(ra, 2)* (4- std::numbers::pi); 
}
