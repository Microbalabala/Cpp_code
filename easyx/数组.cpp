//#include <graphics.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <iostream>


//一维数组
//绘制一个从屏幕上边任意位置下落的白色点
//int main()
//{
//	srand((unsigned)time(NULL));
//	initgraph(640, 480);
//
//	int x = rand() % 640;
//	int y = 0;
//
//	while (!_kbhit())
//	{
//		putpixel(x, y, BLACK);//擦掉前一个点
//		//计算新坐标
//		y += 3;
//		if (y >= 480)
//		{
//			break;
//		}
//		//绘制新点
//		putpixel(x, y, WHITE);
//
//		Sleep(10);
//	}
//	closegraph();
//	return 0;
//}


//产生100个随机下落的点，并且每个点落到底部后，就回到顶部重新往下落
//int main()
//{
//	srand((unsigned)time(NULL));
//	initgraph(640, 480);
//
//	int x[100];
//	int y[100];
//
//	for (int i = 0; i < 100; i++)
//	{
//		x[i] = rand() % 640;
//		y[i] = rand() % 480;
//	}
//
//	while (!_kbhit())
//	{
//		for (int i = 0; i < 100; i++)
//		{
//			putpixel(x[i], y[i], BLACK);
//			y[i] += 3;
//			if (y[i] >= 480)
//			{
//				y[i] = 0;
//			}
//			putpixel(x[i], y[i], WHITE);
//		}
//		Sleep(10);
//	}
//
//	closegraph();
//	return 0;
//}


//二维数组
//屏幕上有16x8的方格，按随机顺序将1-128的数字写到每个格子上
//我们需要记录这些格子，哪些写过数字，哪些没写过数字
//我们用一个二维数组来记录: bool cell[16][8]
//写过数字后，将相应数组的值设置为true
//int main()
//{
//	int x, y;
//	wchar_t num[4];
//	srand((unsigned)time(NULL));
//	initgraph(640, 480);
//
//	//画格子
//	for ( x = 0; x < 480; x += 30)
//	{
//		for ( y = 0; y < 240; y += 30)
//		{
//			rectangle(x, y, x + 28, y + 28);
//		}
//	}
//
//	//定义二维数组
//	bool cell[16][8];
//
//	//初始化二维数组
//	for ( x = 0; x < 16; x++)
//	{
//		for ( y = 0; y < 8; y++)
//		{
//			cell[x][y] = false;
//		}
//	}
//
//	//在每个格子上写数字
//	for (int i = 1; i <= 128; i++)
//	{
//		//找到一个没有写数字的随机格子
//		do
//		{
//			x = rand() % 16;
//			y = rand() % 8;
//		} while (cell[x][y] == true);
//		cell[x][y] = true;
//
//		//在格子上写数字
//		swprintf_s(num, 4, L"%d", i);
//		outtextxy(x * 30 + 2, y * 30 + 6, num);
//	}
//
//	_getch();
//	closegraph();
//	return 0;
//}