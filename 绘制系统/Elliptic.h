#pragma once
#include "Line.h"

class Elliptic :public Line
{
public:
	Elliptic();
	Elliptic(int type, int x1, int y1, int x2, int y2, COLORREF color, int line_Th);
	~Elliptic();

	void line_draw();

};

