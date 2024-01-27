#include "shape.h"

shape::shape(std::string colour): colour(colour)
{
}
std::string shape::GetColour() const
{
    return colour;
}