#pragma once
#include <iostream>
#include <vector>
#include <graphics.h>
#include <conio.h>
#include "ShapeType.h"
using namespace std;


class Line
{
private:
	int type;  //自己的形状
	int x1;
	int y1;
	int x2;
	int y2;
	COLORREF color;  //颜色
	int line_Th;  //线宽

public:
	Line();
	Line(int type, int x1, int y1, int x2, int y2, COLORREF color, int line_Th);
	~Line();

	virtual void line_draw();

	int GetType();
	void SetType(int type);

	int GetX1();
	void SetX1(int x);

	int GetY1();
	void SetY1(int y);

	int GetX2();
	void SetX2(int x);

	int GetY2();
	void SetY2(int y);

	COLORREF GetColor();
	void SetColor(COLORREF c);

	int Getline_Th();
	void Setline_Th(int lt);
};

