#include <graphics.h>
#include <conio.h>
#include <iostream>


//捕获按键,如果有按键，输出该按键，否则，输出".",按ESC退出
//int main()
//{
//	char c = 0;
//	while (c != 27)
//	{
//		//_kbhit()返回当前是否有用户按键
//		if (_kbhit())
//		{
//			c = _getch();
//		}
//		else
//		{
//			c = '.';
//		}
//		cout << c << endl;
//		Sleep(100);
//	}
//	return 0;
//}


//实现w,s,a,d控制圆上下左右移动
//int main()
//{
//	initgraph(600, 500);
//	int x = 300, y = 250;
//	setlinecolor(BLUE);
//	setfillcolor(GREEN);
//	fillcircle(x, y, 50);
//	char c = 0;
//	while (c != 27)
//	{
//		if (_kbhit())
//		{
//			c = _getch();
//
//		}
//		//擦掉上次显示的旧图形
//		setlinecolor(BLACK);
//		setfillcolor(BLACK);
//		fillcircle(x, y, 50);
//
//		//根据输入计算新坐标
//		switch (c)
//		{
//		case 'w':
//			y -= 50;
//			break;
//		case 's':
//			y += 50;
//			break;
//		case 'a':
//			x -= 50;
//			break;
//		case 'd':
//			x += 50;
//			break;
//		case 27:
//			break;
//		}
//
//		//绘制新图形
//		setlinecolor(BLUE);
//		setfillcolor(GREEN);
//		fillcircle(x, y, 50);
//
//		Sleep(10);
//
//		//边界检测，遇到边界就停止
//		if (x - 50 == 0 || y - 50 == 0 || x + 50 == 600 || y + 50 == 500)
//		{
//			c = 0;
//		}
//	}
//	closegraph();
//	return 0;
//}