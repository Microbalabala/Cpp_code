#include "Line.h"


Line::Line()
{
}

Line::Line(int type, int x1, int y1, int x2, int y2, COLORREF color, int line_Th)
{
	this->type = ShapeLine;
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
	this->color = color;
	this->line_Th = line_Th;
}

Line::~Line()
{
}

void Line::line_draw()
{
	setlinecolor(this->color);
	setlinestyle(PS_SOLID, this->line_Th);
	line(this->x1, this->y1, this->x2, this->y2);
}

int Line::GetType()
{
	return this->type;
}

void Line::SetType(int type)
{
	this->type = type;
}

int Line::GetX1()
{
	return this->x1;
}

void Line::SetX1(int x)
{
	this->x1 = x;
}

int Line::GetY1()
{
	return this->y1;
}

void Line::SetY1(int y)
{
	this->y1 = y;
}

int Line::GetX2()
{
	return this->x2;
}

void Line::SetX2(int x)
{
	this->x2 = x;
}

int Line::GetY2()
{
	return this->y2;
}

void Line::SetY2(int y)
{
	this->y2 = y;
}

COLORREF Line::GetColor()
{
	return this->color;
}

void Line::SetColor(COLORREF c)
{
	this->color = c;
}

int Line::Getline_Th()
{
	return this->line_Th;
}

void Line::Setline_Th(int lt)
{
	this->line_Th = lt;
}