// The triangle class

#pragma once
#include "Shape.h"
#include <iostream>

// Class declaration
class Triangle : public Shape
{
private:
	double side1, side2, base, height;

public:
	Triangle(double side1, double side2, double base, double height);

	double getSide1();

	double getSide2();

	double getBase();

	double getHeight();

	virtual double area();

	virtual double perimeter();

	virtual void describeShape();
};

// Function implementations

Triangle::Triangle(double side1, double side2, double base, double height)
{
	this->side1 = side1;
	this->side2 = side2;
	this->base = base;
	this->height = height;
}

double Triangle::getSide1()
{
	return side1;
}

double Triangle::getSide2()
{
	return side2;
}

double Triangle::getBase()
{
	return base;
}

double Triangle::getHeight()
{
	return height;
}

double Triangle::area()
{
	return (getHeight() * getBase()) / 2;
}

double Triangle::perimeter()
{
	return getSide1() + getBase() + getSide2();
}

void Triangle::describeShape()
{
	std::cout << "Triangle\nArea: " << area() << "\nPerimeter: " << perimeter() << std::endl;
}