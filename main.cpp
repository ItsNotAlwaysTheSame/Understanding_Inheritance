#include <iostream>
#include "rourect.h"
#include "papi.h"
#include "cyliner.h"
#include <set>
#include<array> 
#include <list>
#include <vector>
#include <memory>

using ShapeVector = std::set<std::unique_ptr<shape> >; //https://stackoverflow.com/questions/34383979/c-vector-of-base-class-objects
//set is a container in c++ Standard Library that stores unique elements in order.
//std::unique_ptr is a smart pointer in the C++ Standard Library that manages the lifetime of dynamically allocated objects.
//shape is base class
//easily referenced throughout the codebase without needing to repeat the full type definition each time.
void getData(const ShapeVector & shapes)
{    
	for(auto & shape : shapes) 
    {
        std::cout<<"Shape: ";
        printf("%0.2f",shape->getArea() );
        std::cout<<" Colour: "<<shape->GetColour();
        std::cout<<std::endl;
        
    }
} 

int main()
{
    ShapeVector figures;
    std::string red="red";
    std::string blue="blue", brown= "brown", black="black", yellow="yellow";

    figures.insert(std::make_unique<circle>(2.0, red));
    figures.insert(std::make_unique<rect>(2.0,3.0, blue));
    figures.insert(std::make_unique<rourect>(rect(2.0,3.0,brown), 2.0, "brown"));
    figures.insert(std::make_unique<cyliner>(9.0,2.0,yellow));
    figures.insert(std::make_unique<papi>(9.0,2.0,2.0,black));
    getData(figures);
}