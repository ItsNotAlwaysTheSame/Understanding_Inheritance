#include "circle.h"

circle::circle(float r, std::string C): radius(r), colour(C), shape(C)
{//constructor
}
float circle::getArea() const
{
	return std::numbers::pi * radius * radius;
}
