// Abstract Shape class

#pragma once


class Shape
{
public:
	// Abstract methods to be overridden
	virtual double area() = 0;
	virtual double perimeter() = 0;
	virtual void describeShape() = 0;
};
