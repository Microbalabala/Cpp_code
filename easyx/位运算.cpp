#include <graphics.h>
#include <conio.h>
#include <math.h>


//XOR运算
//int main()
//{
//	initgraph(640, 480);
//
//	//画一个黄色矩形框作背景图案
//	setlinestyle(PS_SOLID, 10);
//	setlinecolor(YELLOW);
//	rectangle(100, 100, 200, 200);
//	
//	setrop2(R2_XORPEN);//设置XOR绘图模式
//	setlinecolor(RED);
//	line(50, 0, 200, 300);
//	_getch();
//	line(50, 0, 200, 300);
//	_getch();
//
//	closegraph();
//	return 0;
//
//}


//钟表程序
//void Draw(int hour, int minute, int second)
//{
//	double a_hour, a_min, a_sec;//时分秒的弧度值
//	int x_hour, y_hour, x_min, y_min, x_sec, y_sec;//时分秒的末端位置
//
//	//计算时分秒的弧度值
//	a_sec = second * 2 * PI / 60;
//	a_min = minute * 2 * PI / 60 + a_sec / 60;
//	a_hour = hour * 2 * PI / 12 + a_min / 12;
//
//	//计算时分秒的末端位置
//	x_sec = 320 + (int)120 * sin(a_sec);
//	y_sec = 240 - (int)120 * cos(a_sec);
//	x_min = 320 + (int)120 * sin(a_min);
//	y_min = 240 - (int)120 * cos(a_min);
//	x_hour = 320 + (int)120 * sin(a_hour);
//	y_hour = 240 - (int)120 * cos(a_hour);
//
//	//画时针
//	setlinestyle(PS_SOLID, 10, NULL);
//	setlinecolor(WHITE);
//	line(320, 240, x_hour, y_hour);
//
//	//画分针
//	setlinestyle(PS_SOLID, 6, NULL);
//	setlinecolor(LIGHTGRAY);
//	line(320, 240, x_min, y_min);
//
//	//画秒针
//	setlinestyle(PS_SOLID, 2, NULL);
//	setlinecolor(RED);
//	line(320, 240, x_sec, y_sec);
//}
//
//int main()
//{
//	initgraph(640, 480);
//
//	//绘制表盘
//	circle(320, 240, 2);
//	circle(320, 240, 60);
//	circle(320, 240, 160);
//	outtextxy(296, 310, _T("BestAnys"));
//	
//	setrop2(R2_XORPEN);
//
//	//绘制表针
//	SYSTEMTIME ti;//定义变量保存当前时间
//	while (!_kbhit())
//	{
//		GetLocalTime(&ti);//获取当前时间
//		Draw(ti.wHour, ti.wMinute, ti.wSecond);//画表针
//		Sleep(1000);
//		Draw(ti.wHour, ti.wMinute, ti.wSecond);
//	}
//
//	closegraph();
//	return 0;
//}