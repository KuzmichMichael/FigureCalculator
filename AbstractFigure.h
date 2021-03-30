#pragma once
#include "math.h"
#include <iostream>
#include <string>

#define PI 3.14159265

class AbstractFigure
{
public:
	AbstractFigure();
	~AbstractFigure();
	virtual double area() = 0;
	virtual double perimeter() = 0;
	virtual void paramReques() = 0;

	std::string getTitle();
	void setTitle(std::string newTitle);
private:
	std::string title;
};

