#include "Square.h"



Square::Square()
{
	sideLength = 0;
	this->setTitle("square");
}

Square::Square(double sideLength)
{
	this->sideLength = sideLength;
	this->setTitle("square");
}


Square::~Square()
{
}

const double Square::area() const
{
	return sideLength * sideLength;
}

const double Square::perimeter() const
{
	return 4 * sideLength;
}

void Square::paramReques() 
{
		std::cout << "Enter side length: " << std::endl;
		std::cin >> sideLength;
}

