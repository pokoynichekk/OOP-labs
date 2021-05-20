#include "FigureScaler.h"

void FigureScaler::Scale(TaskRectangle* rectangle, double scale)
{
	rectangle->SetHeight(rectangle->GetHeight() * scale);
	rectangle->SetWidth(rectangle->GetWidth() * scale);
}

void FigureScaler::Scale(TaskRectangle* rectangles, int rectanglesCount,
	double scale)
{
	for (int i = 0; i < rectanglesCount; i++)
	{
		rectangles[i].SetHeight(rectangles[i].GetHeight() * scale);
		rectangles[i].SetWidth(rectangles[i].GetWidth() * scale);
	}
}