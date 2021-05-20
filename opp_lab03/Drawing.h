#pragma once
#include "Line.h"

class Drawing
{
private:
	Line* _lines;
	int _linesCount;
public:
	Line* GetLines();
	int GetLinesCount();

	void SetLines(Line* lines, int linesCount);
	void SetLinesCount(int linesCount);

	Drawing(Line* lines, int linesCount);
	~Drawing();

};