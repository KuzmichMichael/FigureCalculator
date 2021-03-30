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
	delete this;
}

double Rectangle::area()
{
	return width * length;
}

double Rectangle::perimeter()
{
	return 2.0 * (length + width);
}

void Rectangle::paramReques()
{
		double width;
		double length;

		std::cout << "Enter width: " << std::endl;
		std::cin >> width;

		std::cout << "Enter length: " << std::endl;
		std::cin >> length;

		this->width = width;
		this->length = length;
}
