#pragma once

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <string>

class AbstractFigure
{
public:
	AbstractFigure() = default;
	virtual ~AbstractFigure() = default;
	const virtual double area() const = 0;
	const virtual double perimeter() const = 0;
	virtual void paramReques() = 0;

	const std::string getTitle() const;
	void setTitle(std::string newTitle);

private:
	std::string title;
};

