#pragma once
#include "AbstractFigure.h"
class Triangle :
	public AbstractFigure
{
public:
	Triangle();
	Triangle(double sideLength);
	~Triangle();
	virtual double area();
	virtual double perimeter();
	virtual void paramReques();

private:
	double sideLength = 0;
};

