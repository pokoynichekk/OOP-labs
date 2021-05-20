#pragma once
#include "Point2D.h"
#include "LineStyle.h"

class Line
{
private:
	Point2D* _startPoint;
	Point2D* _stopPoint;
	LineStyle _style;

public:
	Point2D* GetStartPoint();
	Point2D* GetStopPoint();
	LineStyle GetLineStyle();

	void SetStartPoint(double startX, double startY);
	void SetStopPoint(double stopX, double stopY);
	void SetLineStyle(LineStyle style);

	Line(double startX, double stopX, double startY, double stopY, LineStyle style);
	~Line();
};