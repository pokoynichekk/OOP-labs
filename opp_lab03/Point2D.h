#pragma once

class Point2D
{
private:
	double _x;
	double _y;
public:
	double GetX();
	double GetY();

	void SetX(double x);
	void SetY(double y);

	Point2D(double x, double y);
	~Point2D();

};