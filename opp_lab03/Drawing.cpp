#include "Drawing.h"
#include <exception>
Line* Drawing::GetLines()
{
	return this->_lines;
}

int Drawing::GetLinesCount()
{
	return this->_linesCount;
}

void Drawing::SetLines(Line* lines, int linesCount)
{
	delete[] this->_lines;
	if (linesCount < 0)
	{
		throw std::exception("Exception");
	}
	this->_linesCount = linesCount; 

	this->_lines = lines;

}
void Drawing::SetLinesCount(int linesCount)
{
	this->_linesCount = linesCount;
}

Drawing::Drawing(Line* lines, int linesCount)
{

	this->SetLines(lines, linesCount);

}
Drawing::~Drawing()
{

}