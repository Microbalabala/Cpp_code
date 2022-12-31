#pragma once
#include "Line.h"

class Rect :public Line
{

public:
	Rect();
	Rect(int type, int x1, int y1, int x2, int y2, COLORREF color, int line_Th);
	~Rect();

	void line_draw();

};

