//#include <graphics.h>//绘图库头文件
//#include <conio.h>//控制台输入输出头文件，_getch()语句需要
//#include <math.h>
//#include <iostream>
//using namespace std;
//#define PI 3.14159265359
//
//int main()
//{
//	initgraph(640, 480);//初始化640*480的绘图屏幕
//
//	//line(200, 240, 440, 240);//画线(200,240)-(440,240)
//	//line(180, 220, 420, 220);//画线(320,120)-(320,360)
//	//line(160, 200, 400, 200);
//	//line(220, 260, 460, 260);
//	//line(240, 280, 480, 280);
//	//line(320, 120, 320, 360);
//	//line(300, 100, 300, 340);
//	//line(280, 80, 280, 320);
//	//line(340, 140, 340, 380);
//	//line(360, 160, 360, 380);
//
//
//	//setlinecolor(BLUE);
//	//circle(320, 240, 120);
//	//Sleep(3000);//延时语句
//	//setlinecolor(RED);
//	//line(200, 240, 440, 240);
//	//line(320, 120, 320, 360);
//
//
//	/*for (int y = 100; y < 200; y += 10)
//	{
//		line(100, y, 300, y);
//	}*/
//
//
//	/*for (int y = 0; y < 256; y++)
//	{
//		setcolor(RGB(0, 0, y));
//		line(100, y, 300, y);
//	}*/
//
//
//	/*for (int y = 0; y < 200; y+=10)
//	{
//		if (y / 10 % 2 == 1)
//		{
//			setcolor(RGB(255, 0, 0));
//		}
//		else
//		{
//			setcolor(RGB(0, 0, 255));
//		}
//		line(100, y, 300, y);
//	}*/
//
//
//	//全屏渐变
//	/*int c;
//	for (int y = 0; y < 480; y++)
//	{
//		c = y * 255 / 479;
//		setlinecolor(RGB(0, c, 0));
//		line(0, y, 639, y);
//	}*/
//
//
//	//圆形渐变
//	//int c;//颜色
//	//double a;//弧度
//	//int x, y, r = 200;
//	//for (a = 0; a < 2 * PI; a += 0.0001)
//	//{
//	//	x = (int)(r * cos(a)+320);
//	//	y = (int)(r * sin(a)+240);
//	//	c = (int)(a * 255 / (2 * PI));
//	//	setlinecolor(RGB(0, 0, c));
//	//	line(320, 240, x, y);
//	//}
//
//
//	//实现一条直线从上往下移动
//	//initgraph(640, 480);
//	//for (int y = 0; y < 480; y++)
//	//{
//	//	//绘制绿色直线
//	//	setlinecolor(GREEN);
//	//	line(0, y, 639, y);
//
//	//	//延时
//	//	Sleep(10);
//
//	//	//绘制黑色直线(即擦掉之前画的直线)
//	//	setlinecolor(BLACK);
//	//	line(0, y, 639, y);
//	//}
//
//
//	//实现一个圆从左往右跳动
//	//initgraph(640, 480);
//	//for (int x = 100; x < 540; x += 20)
//	//{
//	//	//绘制直线，绿色填充的圆
//	//	setlinecolor(YELLOW);
//	//	setfillcolor(GREEN);
//	//	fillcircle(x, 100, 20);
//
//	//	//延时
//	//	Sleep(500);
//
//	//	//绘制黑线，黑色填充的圆
//	//	setlinecolor(BLACK);
//	//	setfillcolor(BLACK);
//	//	fillcircle(x, 100, 20);
//	//}
//
//
//	//绘制一个沿45°移动的球，碰到窗口边界后反弹
//	//initgraph(640, 480);
//	//int i = 1, j = 1;
//	//for (int x = 100, y = 240;; x += i * 20, y -= j * 20)
//	//{
//	//	setlinecolor(WHITE);
//	//	setfillcolor(GREEN);
//	//	fillcircle(x, y, 20);
//	//	Sleep(50);
//	//	setlinecolor(BLACK);
//	//	setfillcolor(BLACK);
//	//	fillcircle(x, y, 20);
//	//	//碰到边界后返回
//	//	if (x + 20 == 640 || x - 20 == 0)
//	//	{
//	//		i *= -1;
//	//	}
//	//	if (y + 20 == 640 || y - 20 == 0)
//	//	{
//	//		j *= -1;
//	//	}
//	//}
//
//
//	
//	_getch();//按任意键
//
//	closegraph();//关闭绘图屏幕
//
//	return 0;
//}


//随机函数
//#include <stdlib.h>
//int main()
//{
//	int r;
//	for (int i = 0; i < 10; i++)
//	{
//		r = rand() % 100 + 1;
//		cout << r << endl;
//	}
//	return 0;
//}

//在屏幕上任意位置画任意颜色的点
//#include <time.h>
//int main()
//{
//	srand((unsigned)time(NULL));
//	initgraph(640, 480);
//	int x, y, c;
//	while (!_kbhit())
//	{
//		x = rand() % 640;
//		y = rand() % 480;
//		c = RGB(rand() % 256, rand() % 256, rand() % 256, );
//		putpixel(x, y, c);
//	}
//	closegraph();
//	return 0;
//}


//在坐标(x,y)处，用颜色c绘制三角形
//void draw_triangle(int x, int y, int c)
//{
//	setlinecolor(c);
//	line(x, y, x + 50, y);
//	line(x, y, x, y + 50);
//	line(x + 50, y, x, y + 50);
//}
//
//int main()
//{
//	initgraph(640, 480);
//	draw_triangle(100, 100, RED);
//	draw_triangle(120, 160, BLUE);
//	draw_triangle(140, 220, GREEN);
//	draw_triangle(160, 120, BLACK);
//	draw_triangle(160, 160, RED);
//	draw_triangle(220, 140, BLUE);
//	_getch();
//	closegraph();
//	return 0;
//}


//void draw_triangle(int x, int y, int color)
//{
//	setlinecolor(color);
//	line(x, y, x + 10, y);
//	line(x, y, x, y + 10);
//	line(x + 10, y, x, y + 10);
//}
//
//int main()
//{
//	initgraph(640, 480);
//	for (int x = 0; x < 640; x+=10)
//	{
//		for (int y = 0; y < 480; y+=10)
//		{
//			draw_triangle(x, y, RGB(x * 255 / 639, y * 255 / 479, 0));
//		}
//	}
//	_getch();
//	closegraph();
//	return 0;
//}