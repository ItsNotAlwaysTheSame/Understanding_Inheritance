#ifndef SHAPE_H
#define SHAPE_H
#include <string>

class shape
{
public:
//the class Shape must contain at least two interface functions
//  and being intended both for shapes' area calculations and for getting
// information about colour( e.g., GetArea( ) and GetColour( ) ). 
	shape(std::string colour);
	virtual ~shape() = default;

	 std::string GetColour() const;

	virtual float getArea() const = 0; 
//use of pure virtual function because we will reuse it again in the derived classes
//with different implementations to be suitable for every shape in the derived classes
private:
	std::string colour;
};


#endif
