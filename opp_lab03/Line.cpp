#include "Line.h"

Point2D* Line::GetStartPoint()
{
	return this->_startPoint;
}

Point2D* Line::GetStopPoint()
{
	return this->_stopPoint;
}
LineStyle Line::GetLineStyle()
{
	return this->_style;
}

void Line::SetStartPoint(double startX, double startY)
{	
	delete this->_startPoint;
	this->_startPoint = new Point2D(startX, startY);
}

void Line::SetStopPoint(double stopX, double stopY)
{
	delete this->_stopPoint;
	this->_stopPoint = new Point2D(stopX,stopY);
}

void Line::SetLineStyle(LineStyle style)
{
	this->_style = style;
}

Line::Line(double startX, double stopX, double startY, double stopY, LineStyle style)
{
	this->SetStartPoint(startX, startY);
	this->SetStopPoint(stopX, stopY);
	this->SetLineStyle(style);
}

Line::~Line()
{

}