#include <graphics.h>//��ͼ��ͷ�ļ�
#include <conio.h>//����̨�������ͷ�ļ���_getch()�����Ҫ
#include <math.h>
#include <iostream>
using namespace std;
#define PI 3.14159265359
//
//int main()
//{
//	initgraph(640, 480);//��ʼ��640*480�Ļ�ͼ��Ļ
//
//	//line(200, 240, 440, 240);//����(200,240)-(440,240)
//	//line(180, 220, 420, 220);//����(320,120)-(320,360)
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
//	//Sleep(3000);//��ʱ���
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
//	//ȫ������
//	/*int c;
//	for (int y = 0; y < 480; y++)
//	{
//		c = y * 255 / 479;
//		setlinecolor(RGB(0, c, 0));
//		line(0, y, 639, y);
//	}*/
//
//
//	//Բ�ν���
//	//int c;//��ɫ
//	//double a;//����
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
//	//ʵ��һ��ֱ�ߴ��������ƶ�
//	//initgraph(640, 480);
//	//for (int y = 0; y < 480; y++)
//	//{
//	//	//������ɫֱ��
//	//	setlinecolor(GREEN);
//	//	line(0, y, 639, y);
//
//	//	//��ʱ
//	//	Sleep(10);
//
//	//	//���ƺ�ɫֱ��(������֮ǰ����ֱ��)
//	//	setlinecolor(BLACK);
//	//	line(0, y, 639, y);
//	//}
//
//
//	//ʵ��һ��Բ������������
//	//initgraph(640, 480);
//	//for (int x = 100; x < 540; x += 20)
//	//{
//	//	//����ֱ�ߣ���ɫ����Բ
//	//	setlinecolor(YELLOW);
//	//	setfillcolor(GREEN);
//	//	fillcircle(x, 100, 20);
//
//	//	//��ʱ
//	//	Sleep(500);
//
//	//	//���ƺ��ߣ���ɫ����Բ
//	//	setlinecolor(BLACK);
//	//	setfillcolor(BLACK);
//	//	fillcircle(x, 100, 20);
//	//}
//
//
//	//����һ����45���ƶ������������ڱ߽�󷴵�
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
//	//	//�����߽�󷵻�
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
//	_getch();//�������
//
//	closegraph();//�رջ�ͼ��Ļ
//
//	return 0;
//}


//���񰴼�,����а���������ð������������".",��ESC�˳�
//int main()
//{
//	char c = 0;
//	while (c != 27)
//	{
//		//_kbhit()���ص�ǰ�Ƿ����û�����
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


//ʵ��w,s,a,d����Բ���������ƶ�
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
//		//�����ϴ���ʾ�ľ�ͼ��
//		setlinecolor(BLACK);
//		setfillcolor(BLACK);
//		fillcircle(x, y, 50);
//
//		//�����������������
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
//		//������ͼ��
//		setlinecolor(BLUE);
//		setfillcolor(GREEN);
//		fillcircle(x, y, 50);
//
//		Sleep(10);
//
//		//�߽��⣬�����߽��ֹͣ
//		if (x - 50 == 0 || y - 50 == 0 || x + 50 == 600 || y + 50 == 500)
//		{
//			c = 0;
//		}
//	}
//	closegraph();
//	return 0;
//}


//�������
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

//����Ļ������λ�û�������ɫ�ĵ�
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


//������(x,y)��������ɫc����������
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


//XOR����
//int main()
//{
//	initgraph(640, 480);
//
//	//��һ����ɫ���ο�������ͼ��
//	setlinestyle(PS_SOLID, 10);
//	setlinecolor(YELLOW);
//	rectangle(100, 100, 200, 200);
//	
//	setrop2(R2_XORPEN);//����XOR��ͼģʽ
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


//�ӱ����
void Draw(int hour, int minute, int second)
{
	double a_hour, a_min, a_sec;//ʱ����Ļ���ֵ
	int x_hour, y_hour, x_min, y_min, x_sec, y_sec;//ʱ�����ĩ��λ��

	//����ʱ����Ļ���ֵ
	a_sec = second * 2 * PI / 60;
	a_min = minute * 2 * PI / 60 + a_sec / 60;
	a_hour = hour * 2 * PI / 12 + a_min / 12;

	//����ʱ�����ĩ��λ��
	x_sec = 320 + (int)120 * sin(a_sec);
	y_sec = 240 - (int)120 * cos(a_sec);
	x_min = 320 + (int)120 * sin(a_min);
	y_min = 240 - (int)120 * cos(a_min);
	x_hour = 320 + (int)120 * sin(a_hour);
	y_hour = 240 - (int)120 * cos(a_hour);

	//��ʱ��
	setlinestyle(PS_SOLID, 10, NULL);
	setlinecolor(WHITE);
	line(320, 240, x_hour, y_hour);

	//������
	setlinestyle(PS_SOLID, 6, NULL);
	setlinecolor(LIGHTGRAY);
	line(320, 240, x_min, y_min);

	//������
	setlinestyle(PS_SOLID, 2, NULL);
	setlinecolor(RED);
	line(320, 240, x_sec, y_sec);
}

int main()
{
	initgraph(640, 480);

	//���Ʊ���
	circle(320, 240, 2);
	circle(320, 240, 60);
	circle(320, 240, 160);
	outtextxy(296, 310, _T("BestAnys"));
	
	setrop2(R2_XORPEN);

	//���Ʊ���
	SYSTEMTIME ti;//����������浱ǰʱ��
	while (!_kbhit())
	{
		GetLocalTime(&ti);//��ȡ��ǰʱ��
		Draw(ti.wHour, ti.wMinute, ti.wSecond);//������
		Sleep(1000);
		Draw(ti.wHour, ti.wMinute, ti.wSecond);
	}

	closegraph();
	return 0;
}