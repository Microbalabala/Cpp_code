#include "FloodElliptic.h"

FloodElliptic::FloodElliptic()
{
}

FloodElliptic::FloodElliptic(int type, int x1, int y1, int x2, int y2, COLORREF color, int line_Th)
{
	this->SetType(ShapeFloodElliptic);
	this->SetX1(x1);
	this->SetY1(y1);
	this->SetX2(x2);
	this->SetY2(y2);
	this->SetColor(color);
	this->Setline_Th(line_Th);
}

FloodElliptic::~FloodElliptic()
{
}

void FloodElliptic::line_draw()
{
	setfillcolor(this->GetColor());
	setfillstyle(BS_SOLID);
	fillellipse(this->GetX1(), this->GetY1(), this->GetX2(), this->GetY2());
}
