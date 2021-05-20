#include "TaskRectangle.h"

TaskRectangle::TaskRectangle(double height, double width)
{
	this->SetHeight(height);
	this->SetWidth(width);
}

void TaskRectangle::SetHeight(double height)
{
	this->_height = height;
}

void TaskRectangle::SetWidth(double width)
{
	this->_width = width;
}

double TaskRectangle::GetHeight()
{
	return this->_height;
}

double TaskRectangle::GetWidth()
{
	return this->_width;
}
