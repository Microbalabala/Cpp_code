#pragma once
#include "Line.h"
class FloodElliptic :public Line
{
public:
	FloodElliptic();
	FloodElliptic(int type, int x1, int y1, int x2, int y2, COLORREF color, int line_Th);
	~FloodElliptic();

	void line_draw();
};

