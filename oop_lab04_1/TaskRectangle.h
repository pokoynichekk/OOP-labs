#pragma once

class TaskRectangle
{
private:
	double _height;
	double _width;

public:
	void SetHeight(double height);
	void SetWidth(double width);

	double GetHeight();
	double GetWidth();

	TaskRectangle(double height, double width);
	~TaskRectangle()
	{

	}

};