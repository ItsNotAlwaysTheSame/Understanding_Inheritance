#ifndef PAPI_H
#define PAPI_H
#include "rect.h"

class papi: public shape
{
public:
    papi(float wid, float he, float leng, std::string C);
    float getVolume() const ;
    float getArea() const ;
    rect rectangle;
    float L;
    std::string col;
};

#endif