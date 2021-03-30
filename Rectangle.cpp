#include "Rectangle.h"



Rectangle::Rectangle()
{
	width = 0;
	length = 0;
	this->setTitle("rectangle");
}

Rectangle::Rectangle(double width, double length)
{
	this->width = width;
	this->length = length;
	this->setTitle("rectangle");
}


Rectangle::~Rectangle()
{
}

const double Rectangle::area() const
{
	return width * length;
}

const double Rectangle::perimeter() const
{
	return 2.0 * (length + width);
}

void Rectangle::paramReques()
{
		std::cout << "Enter width: " << std::endl;
		std::cin >> width;

		std::cout << "Enter length: " << std::endl;
		std::cin >> length;
}
