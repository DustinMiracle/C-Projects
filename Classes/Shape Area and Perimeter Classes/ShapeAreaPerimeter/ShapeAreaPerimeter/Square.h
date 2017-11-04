// The square class

#pragma once
#include "Shape.h"
#include <iostream>

// Class declaration
class Square : public Shape
{
private:
	double side;

public:
	Square(double side);

	double getSide();

	virtual double area();

	virtual double perimeter();

	virtual void describeShape();
};

// function implementations

Square::Square(double side)
{
	this->side = side;
}

double Square::getSide()
{
	return side;
}

double Square::area()
{
	return side * side;
}

double Square::perimeter()
{
	return 4 * side;
}

void Square::describeShape()
{
	std::cout << "Square\nArea: " << area() << "\nPerimeter: " << perimeter() << std::endl;
}
