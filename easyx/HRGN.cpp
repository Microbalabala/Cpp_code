//#include <graphics.h>
//#include <conio.h>
//
//int main()
//{
//	// 初始化绘图窗口
//	initgraph(640, 480);
//
//	// 创建一个矩形区域
//	HRGN rgn = CreateRectRgn(100, 100, 200, 200);
//	// 将该矩形区域设置为裁剪区
//	setcliprgn(rgn);
//	// 不再使用 rgn，清理 rgn 占用的系统资源
//	DeleteObject(rgn);
//
//	// 画圆，受裁剪区影响，只显示出四段圆弧
//	circle(150, 150, 55);
//
//	// 取消之前设置的裁剪区
//	setcliprgn(NULL);
//
//	// 画圆，不再受裁剪区影响，显示出一个完整的圆
//	circle(150, 150, 60);
//
//	// 按任意键退出
//	_getch();
//	closegraph();
//}