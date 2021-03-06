#pragma once
#include "AbstractFigure.h"
class Rectangle :
	public AbstractFigure
{
public:
	Rectangle();
	Rectangle(double width, double length);
	~Rectangle();
	const double area() const override;
	const double perimeter() const override;
	virtual void paramReques();

private:
	double width = 0;
	double length = 0;
};

