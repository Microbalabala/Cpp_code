//#include <graphics.h>
//#include <conio.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	initgraph(640, 480);
//	int x, y;
//	TCHAR c;  //��û�ж����_UNICODEʱ��TCHAR=char������TCHAR=wchar_t
//	settextstyle(16, 8, _T("Courier"));  //_T��һ���꣬�����ݻ����Զ�ƥ��ΪASCII��Unicode
//	settextcolor(GREEN);
//	setlinecolor(BLACK);
//	while (!_kbhit())  //_kbhit()��鵱ǰ�Ƿ��м������룬���з��ط�0ֵ�����򷵻�0
//	{
//		for (int i = 0; i < 479; i++)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				x = (rand() % 80) * 8;
//				y = (rand() % 20) * 24;
//				c = (rand() % 26) + 65;
//				outtextxy(x, y, c);
//			}
//			line(0, i, 639, i);
//			Sleep(10);
//			if (_kbhit())
//			{
//				break;
//			}
//		}
//	}
//	closegraph();
//	return 0;
//}