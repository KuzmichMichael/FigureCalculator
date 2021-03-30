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
	delete this;
}

double Circle::area()
{
	return PI * radius * radius;
}

double Circle::perimeter()
{
	return 2.0f * PI * radius;
}

void Circle::paramReques()
{
	double radius;

	std::cout << "Enter circle radius: " << std::endl;
	std::cin >> radius;
	this->radius = radius;
}
