#include <iostream>
#include "AbstractFigure.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

using namespace std;

enum figures
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

	cout << "choose figure \n 1 - square \n 2 - rectangle \n 3 - triangle \n 4 - circle" << endl;
	cin >> figureChoise;

	switch (figureChoise)
	{
	case SQUARE:
		std::cout << "you choosed square " <<endl;
		figure = new Square();
		figure->paramReques();
		break;

	case RECTRANGLE:
		std::cout << "you choosed rectangle " << endl;
		figure = new Rectangle();
		figure->paramReques();
		break;

	case TRIANGLE:
		std::cout << "you choosed triangle " << endl;
		figure = new Triangle();
		figure->paramReques();
		break;

	case CIRCLE:
		std::cout << "you choosed circle " << endl;
		figure = new Circle();
		figure->paramReques();
		break;

	default:
		cout << "wrong number" << endl;
		return 888;
	}

	cout << "choose method \n a - " << figure->getTitle() << " area \n p - " << figure->getTitle() << " perimeter" << endl;
	cin >> methodChoise;

	switch (methodChoise)
	{
	case 'a':
		cout << figure->getTitle() <<" area = " << figure->area();
		break;

	case 'p':
		cout << figure->getTitle() << " perimeter = " << figure->perimeter();
		break;

	default:
		cout << "wrong symbol" << endl;
		return 999;
	}
}

