#pragma once

#include "Point.h"

class Rectangle
{
private:
	Point* _center;
	double _height;
	double _width;

public:
	void SetCenterPoint(double x, double y);
	void SetHeight(double height);
	void SetWidth(double width);

	Point* GetCenterPoint();
	double GetHeight();
	double GetWidth();

	Rectangle(double height, double width, double x, double y);
	~Rectangle();

};