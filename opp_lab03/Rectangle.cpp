#include <exception>

#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(double height, double width, double x, double y)
{
	this->SetHeight(height);
	this->SetWidth(width);
	this->SetCenterPoint(x, y);
}

void Rectangle::SetCenterPoint(double x, double y)
{
	delete this->_center;
	this->_center = new Point(x, y);
}

Point* Rectangle::GetCenterPoint()
{
	return this->_center;
}

double Rectangle::GetWidth()
{

	return this->_width;
}

double Rectangle::GetHeight()
{
	return this->_height;
}

void Rectangle::SetWidth(double width)
{
	if (width < 0)
	{
		throw exception("Width can't be negative.");
	}
	this->_width = width;
}

void Rectangle::SetHeight(double height)
{
	if (height < 0)
	{
		throw exception("Height can't be negative.");
	}
	this->_height = height;
}


Rectangle::~Rectangle()
{
	delete this->_center;
}