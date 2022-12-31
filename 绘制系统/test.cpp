#include <iostream>
#include <graphics.h>
#include <conio.h>
#include "Canvas.h"
#include "Line.h"
using namespace std;



int main()
{
	

	Canvas canvas;
	canvas.SetWindow();
	canvas.painting();
	

	_getch();
	return 0;
}