#include "Rect.h"


Rect::Rect()
{
}

Rect::Rect(int type, int x1, int y1, int x2, int y2, COLORREF color, int line_Th)
{
	this->SetType(ShapeRect);
	this->SetX1(x1);
	this->SetY1(y1);
	this->SetX2(x2);
	this->SetY2(y2);
	this->SetColor(color);
	this->Setline_Th(line_Th);
}

Rect::~Rect()
{
}

void Rect::line_draw()
{
	setlinecolor(this->GetColor());
	setlinestyle(PS_SOLID, this->Getline_Th());
	rectangle(this->GetX1(), this->GetY1(), this->GetX2(), this->GetY2());
}
