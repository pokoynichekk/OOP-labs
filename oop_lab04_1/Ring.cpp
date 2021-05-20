#include "Ring.h"
#include "DoubleValidator.h"
#include <exception>

const double PI = 3.14;

int Ring::AllRingsCount = 0;

int Ring::GetAllRingsCount()
{
	return Ring::AllRingsCount;
}

void Ring::AddAllRingsCount()
{
	Ring::AllRingsCount++;
}
void Ring::SubtractAllRingsCount()
{
	Ring::AllRingsCount--;
}

void Ring::AssertPositiveValue(double value)
{
	if (value < 0)
	{
		throw std::exception("Ring doesn't exist");
	}
}

void Ring::SetRadius(double innerRadius, double externalRadius)
{
	DoubleValidator::AssertPositiveValue(innerRadius);
	DoubleValidator::AssertPositiveValue(externalRadius);

	if (innerRadius > externalRadius)
	{
		throw std::exception("Ring doesn't exist");
	}
	this->_innerRadius = innerRadius;
	this->_externalRadius = externalRadius;
}

void Ring::SetCenter(double x, double y)
{
	delete this->_centerPoint;
	this->_centerPoint = new Point(x, y);
}

double Ring::GetArea()
{
	return ((PI * this->_externalRadius * this->_externalRadius)
		- (PI * this->_innerRadius * this->_innerRadius));
}

Point* Ring::GetCenter()
{
	return this->_centerPoint;
}

double Ring::GetExternalRadius()
{
	return this->_externalRadius;
}

Ring::Ring(double innerRadius, double externalRadius, 
	double x, double y)
{
	this->SetRadius(innerRadius, externalRadius);
	this->SetCenter(x, y);

	Ring::AddAllRingsCount();
}