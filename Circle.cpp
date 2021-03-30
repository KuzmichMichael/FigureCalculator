#include "Circle.h"


Circle::Circle()
{
	radius = 0;
	this->setTitle("circle");
}

Circle::Circle(double radius)
{
	this->radius = radius;
	this->setTitle("circle");
}


Circle::~Circle()
{
}

const double Circle::area() const
{
	return M_PI * radius * radius;
}

const double Circle::perimeter() const
{
	return 2.0f * M_PI * radius;
}

void Circle::paramReques()
{
	std::cout << "Enter circle radius: " << std::endl;
	std::cin >> radius;
}
