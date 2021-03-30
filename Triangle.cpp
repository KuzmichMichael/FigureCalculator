#include "Triangle.h"



Triangle::Triangle()
{
	sideLength = 0;
	this->setTitle("triangle");
}

Triangle::Triangle(double sideLength)
{
	this->sideLength = sideLength;
	this->setTitle("triangle");
}


Triangle::~Triangle()
{
	delete this;
}

double Triangle::area()
{
	return (sideLength * sideLength * sqrt(3)) / 4;
}

double Triangle::perimeter()
{
	return sideLength * 3;
}

void Triangle::paramReques()
{
	double sideLength;

	std::cout << "Enter side length: " << std::endl;
	std::cin >> sideLength;
	this->sideLength = sideLength;
}
