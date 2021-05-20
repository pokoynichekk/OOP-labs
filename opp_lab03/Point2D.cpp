#include "Point2D.h"

double Point2D::GetX()
{
	return this->_x;
}

double Point2D::GetY()
{
	return this->_y;
}

void Point2D::SetX(double x)
{
	this->_x = x;
}

void Point2D::SetY(double y)
{
	this->_y = y;
}

Point2D::Point2D(double x, double y)
{
	this->SetX(x);
	this->SetY(y);
}

Point2D::~Point2D()
{

}