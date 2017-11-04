// This program asks the user to select a shape type and for information about the shape to calculate the area and the perimeter.

#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <iostream>
#include <memory>

// Function prototypes
int getShapeType();


// main function
int main()
{
	int shapeType = getShapeType();

	switch (shapeType)
	{
	case 1:
	{
		double side;
		std::cout << "You picked square! Please enter a side length: ";
		std::cin >> side;
		std::unique_ptr<Square> square(new Square(side));
		square->describeShape();
		break;
	}
	case 2:
	{
		double length, width;
		std::cout << "You picked rectangle! Please enter the length and the width.\nLength: ";
		std::cin >> length;
		std::cout << "\nWidth: ";
		std::cin >> width;
		std::unique_ptr<Rectangle> rectangle(new Rectangle(width, length));
		rectangle->describeShape();
		break;
	}
	case 3:
	{
		double radius;
		std::cout << "You picked circle! Please enter the radius of the circle: ";
		std::cin >> radius;
		std::unique_ptr<Circle> circle(new Circle(radius));
		circle->describeShape();
		break;
	}
	case 4:
	{
		double side1, side2, base, height;
		std::cout << "You picked triangle! Please enter the 3 sides and the height.\nSide 1:";
		std::cin >> side1;
		std::cout << "\nSide 2: ";
		std::cin >> side2;
		std::cout << "\nBase: ";
		std::cin >> base;
		std::cout << "\nHeight: ";
		std::cin >> height;
		std::unique_ptr<Triangle> triangle(new Triangle(side1, side2, base, height));
		triangle->describeShape();
		break;
	}
	}

	return 0;
}

// Function implementations
int getShapeType()
{
	int shapeType;
	do
	{
		std::cout << "Enter a number to choose a shape type.\n1. Square\n2. Rectangle\n3. Circle\n4. Triangle" << std::endl;
		std::cin >> shapeType;
	} while (shapeType < 1 || shapeType > 4);

	return shapeType;
}