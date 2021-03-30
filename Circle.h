#pragma once
#include "AbstractFigure.h"

class Circle :
	public AbstractFigure
{
public:
	Circle();
	Circle(double radius);
	~Circle();
	virtual double area();
	virtual double perimeter();
	virtual void paramReques();

private:
	double radius;
	
};

