#pragma once
#include "AbstractFigure.h"
class Rectangle :
	public AbstractFigure
{
public:
	Rectangle();
	Rectangle(double width, double length);
	~Rectangle();
	virtual double area();
	virtual double perimeter();
	virtual void paramReques();

private:
	double width = 0;
	double length = 0;
};

