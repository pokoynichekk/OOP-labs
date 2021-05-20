#pragma once
#include "TaskRectangle.h"

static class FigureScaler
{
public:
	static void Scale(TaskRectangle* rectangle, double scale);
	static void Scale(TaskRectangle* rectangles, int rectanglesCount,
		double scale);
};