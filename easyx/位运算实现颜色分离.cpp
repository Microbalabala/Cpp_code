//#include <graphics.h>
//#include <conio.h>
//
//int main()
//{
//	initgraph(640, 480);
//
//	//¶ÁÈ¡Í¼Æ¬
//	loadimage(NULL, _T("D:\QQÍ·Ïñ.jpg"));
//
//	int c;
//	for (int x = 0; x < 350; x++)
//	{
//		for (int y = 0; y < 480; y++)
//		{
//			c = getpixel(x, y);
//			c = (0xff0000 - (c & 0xff0000)) | (0x00ff00 - (c & 0x00ff00)) | (0x0000ff - (c & 0x0000ff));
//			putpixel(x, y, c);
//		}
//	}
//
//	_getch();
//	closegraph();
//	return 0;
//
//}