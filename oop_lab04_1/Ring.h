#pragma once
#include "Point.h"

class Ring 
{
private:
	static int AllRingsCount;

	double _innerRadius;
	double _externalRadius;
	Point* _centerPoint;

	
public:
	void SetRadius(double innerRadius, double externalRadius);
	void SetCenter(double x, double y);

	double GetArea();
	Point* GetCenter();
	double GetExternalRadius();
	static int GetAllRingsCount();
	void AssertPositiveValue(double value);
	static void AddAllRingsCount();
	static void SubtractAllRingsCount();

	Ring(double innerRadius, double externalRadius,
		double x, double y);
	~Ring()
	{
		Ring::SubtractAllRingsCount();
	}


};