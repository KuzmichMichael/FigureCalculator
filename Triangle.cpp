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
}

const double Triangle::area() const
{
	return (sideLength * sideLength * sqrt(3)) / 4;
}

const double Triangle::perimeter() const
{
	return sideLength * 3;
}

void Triangle::paramReques()
{
	std::cout << "Enter side length: " << std::endl;
	std::cin >> sideLength;
}
