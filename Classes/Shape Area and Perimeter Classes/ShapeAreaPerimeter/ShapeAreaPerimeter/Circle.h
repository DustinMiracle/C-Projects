// The circle class

#pragma once
#include "Shape.h"
#include <iostream>
#include <cmath>

// Class Declaration
class Circle : public Shape
{
private:
	double radius;
	const double pi = 3.14159265358;

public:
	Circle(double radius);

	double getRadius();

	virtual double area();

	virtual double perimeter();

	virtual void describeShape();
};

// Function implementations

Circle::Circle(double radius)
{
	this->radius = radius;
}

double Circle::getRadius()
{
	return radius;
}

double Circle::area()
{
	return pi * (pow(getRadius(), 2));
}

double Circle::perimeter() // Circumference
{
	return 2 * pi * getRadius();
}

// Display the area and the perimeter for the circle
void Circle::describeShape()
{
	std::cout << "Circle\nArea: " << area() << "\nCircumference: " << perimeter() << std::endl;
}