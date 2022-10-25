//#include <graphics.h>
//#include <conio.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	initgraph(640, 480);
//	int x, y;
//	TCHAR c;  //当没有定义宏_UNICODE时，TCHAR=char，否则TCHAR=wchar_t
//	settextstyle(16, 8, _T("Courier"));  //_T是一个宏，它根据环境自动匹配为ASCII或Unicode
//	settextcolor(GREEN);
//	setlinecolor(BLACK);
//	while (!_kbhit())  //_kbhit()检查当前是否有键盘输入，若有返回非0值，否则返回0
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