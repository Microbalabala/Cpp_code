#include <graphics.h>
#include <conio.h>


//加载图片
//1.定义IMAGE对象
//2.读取图片至IMAGE对象
//3.显示IMAGE对象到指定的位置
//int main()
//{
//	initgraph(640, 480);
//	
//	IMAGE img;  //定义IMAGE对象
//	loadimage(&img, _T("D:\\QQ头像.jpg"));  //读取图片到img对象中
//	putimage(0, 0, &img);  //在坐标（0，0）位置显示image对象
//
//	_getch();
//	closegraph();
//	return 0;
//}


//保存屏幕区域
//int main()
//{
//	initgraph(640, 480);
//
//	IMAGE img;
//
//	circle(100, 100, 20);
//	line(70, 100, 130, 100);
//	line(100, 70, 100, 130);
//
//	getimage(&img, 70, 70, 60, 60);  //保存区域至img对象
//
//	putimage(200, 200, &img);  //将img对象显示在屏幕的某个位置
//
//	_getch();
//	closegraph();
//	return 0;
//}