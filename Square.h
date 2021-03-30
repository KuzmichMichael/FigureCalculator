#pragma once
#include "AbstractFigure.h"
class Square :
	public AbstractFigure
{
public:
	Square();
	Square(double sideLength);
	~Square(); 
	const double area() const override;
	const double perimeter() const override;
	virtual void paramReques();

private:
	double sideLength = 0;
};

