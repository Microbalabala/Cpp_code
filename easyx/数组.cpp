//#include <graphics.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <iostream>


//һά����
//����һ������Ļ�ϱ�����λ������İ�ɫ��
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
//		putpixel(x, y, BLACK);//����ǰһ����
//		//����������
//		y += 3;
//		if (y >= 480)
//		{
//			break;
//		}
//		//�����µ�
//		putpixel(x, y, WHITE);
//
//		Sleep(10);
//	}
//	closegraph();
//	return 0;
//}


//����100���������ĵ㣬����ÿ�����䵽�ײ��󣬾ͻص���������������
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


//��ά����
//��Ļ����16x8�ķ��񣬰����˳��1-128������д��ÿ��������
//������Ҫ��¼��Щ���ӣ���Щд�����֣���Щûд������
//������һ����ά��������¼: bool cell[16][8]
//д�����ֺ󣬽���Ӧ�����ֵ����Ϊtrue
//int main()
//{
//	int x, y;
//	wchar_t num[4];
//	srand((unsigned)time(NULL));
//	initgraph(640, 480);
//
//	//������
//	for ( x = 0; x < 480; x += 30)
//	{
//		for ( y = 0; y < 240; y += 30)
//		{
//			rectangle(x, y, x + 28, y + 28);
//		}
//	}
//
//	//�����ά����
//	bool cell[16][8];
//
//	//��ʼ����ά����
//	for ( x = 0; x < 16; x++)
//	{
//		for ( y = 0; y < 8; y++)
//		{
//			cell[x][y] = false;
//		}
//	}
//
//	//��ÿ��������д����
//	for (int i = 1; i <= 128; i++)
//	{
//		//�ҵ�һ��û��д���ֵ��������
//		do
//		{
//			x = rand() % 16;
//			y = rand() % 8;
//		} while (cell[x][y] == true);
//		cell[x][y] = true;
//
//		//�ڸ�����д����
//		swprintf_s(num, 4, L"%d", i);
//		outtextxy(x * 30 + 2, y * 30 + 6, num);
//	}
//
//	_getch();
//	closegraph();
//	return 0;
//}