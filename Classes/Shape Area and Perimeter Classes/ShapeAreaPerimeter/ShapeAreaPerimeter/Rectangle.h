// The rectangle class

#pragma once
#include "Shape.h"
#include <iostream>

// Class declaration
class Rectangle : public Shape
{
private:
	double width, length;

public:
	Rectangle(double width, double length);

	double getWidth();

	double getLength();

	virtual double area();

	virtual double perimeter();

	virtual void describeShape();
};

// Function implementations

Rectangle::Rectangle(double width, double length)
{
	this->width = width;
	this->length = length;
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::getLength()
{
	return length;
}

double Rectangle::area()
{
	return getWidth() * getLength();
}

double Rectangle::perimeter()
{
	return 2 * (getWidth() + getLength());
}

void Rectangle::describeShape()
{
	std::cout << "Rectangle\nArea: " << area() << "\nPerimeter: " << perimeter() << std::endl;
}