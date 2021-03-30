#pragma once
#include "AbstractFigure.h"

class Circle :
	public AbstractFigure
{
public:
	Circle();
	Circle(double radius);
	~Circle();
	const double area() const override;
	const double perimeter() const override;
	virtual void paramReques();

private:
	double radius;
	
};

