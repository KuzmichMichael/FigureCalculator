#include "AbstractFigure.h"

const std::string AbstractFigure::getTitle() const
{
	return title;
}

void AbstractFigure::setTitle(std::string newTitle)
{
	title = newTitle;
}
