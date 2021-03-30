#include <iostream>
#include "AbstractFigure.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

enum class Figures
{
	SQUARE = 1,
	RECTRANGLE,
	TRIANGLE,
	CIRCLE
};

int main() {

	AbstractFigure* figure;

	int figureChoise = 0;
	char methodChoise = 0;

	std::cout << "choose figure \n 1 - square \n 2 - rectangle \n 3 - triangle \n 4 - circle" << std::endl;
	std::cin >> figureChoise;

	Figures figureChoiseEnum = static_cast<Figures>(figureChoise);

	switch (figureChoiseEnum)
	{
	case Figures::SQUARE:
		std::cout << "you choosed square " << std::endl;
		figure = new Square();
		figure->paramReques();
		break;

	case Figures::RECTRANGLE:
		std::cout << "you choosed rectangle " << std::endl;
		figure = new Rectangle();
		figure->paramReques();
		break;

	case Figures::TRIANGLE:
		std::cout << "you choosed triangle " << std::endl;
		figure = new Triangle();
		figure->paramReques();
		break;

	case Figures::CIRCLE:
		std::cout << "you choosed circle " << std::endl;
		figure = new Circle();
		figure->paramReques();
		break;

	default:
		std::cout << "wrong number" << std::endl;
		return 888;
	}

	std::cout << "choose method \n a - " << figure->getTitle() << " area \n p - " << figure->getTitle() << " perimeter" << std::endl;
	std::cin >> methodChoise;

	switch (methodChoise)
	{
	case 'a':
		std::cout << figure->getTitle() <<" area = " << figure->area();
		break;

	case 'p':
		std::cout << figure->getTitle() << " perimeter = " << figure->perimeter();
		break;

	default:
		std::cout << "wrong symbol" << std::endl;
		return 999;
	}

	delete figure;
}

