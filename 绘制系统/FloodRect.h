#pragma once
#include "Line.h"
class FloodRect :public Line
{
public:
	FloodRect();
	FloodRect(int type, int x1, int y1, int x2, int y2, COLORREF color, int line_Th);
	~FloodRect();

	void line_draw();
};

