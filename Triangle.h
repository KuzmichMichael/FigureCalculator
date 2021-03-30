#pragma once
#include "AbstractFigure.h"
class Triangle :
	public AbstractFigure
{
public:
	Triangle();
	Triangle(double sideLength);
	~Triangle();
	const double area() const override;
	const double perimeter() const override;
	virtual void paramReques();

private:
	double sideLength = 0;
};

