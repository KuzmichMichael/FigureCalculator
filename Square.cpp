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
	delete this;
}

double Square::area()
{
	return sideLength * sideLength;
}

double Square::perimeter()
{
	return 4 * sideLength;
}

void Square::paramReques()
{
		double sideLength;

		std::cout << "Enter side length: " << std::endl;
		std::cin >> sideLength;
		this->sideLength = sideLength;
}

