#include <graphics.h>
#include <conio.h>
#include <iostream>


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