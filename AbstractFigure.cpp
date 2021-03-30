#include "AbstractFigure.h"



AbstractFigure::AbstractFigure()
{
}


AbstractFigure::~AbstractFigure()
{
}

std::string AbstractFigure::getTitle()
{
	return title;
}

void AbstractFigure::setTitle(std::string newTitle)
{
	title = newTitle;
}
