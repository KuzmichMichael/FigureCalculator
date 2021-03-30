#pragma once
#include "AbstractFigure.h"
class Square :
	public AbstractFigure
{
public:
	Square();
	Square(double sideLength);
	~Square();
	virtual double area();
	virtual double perimeter();
	virtual void paramReques();

private:
	double sideLength = 0;
};

