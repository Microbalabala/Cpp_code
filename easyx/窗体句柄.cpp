#include <graphics.h>
#include <conio.h>
//
//int main()
//{
//	initgraph(640, 480);
//
//	HWND hwnd = GetHWnd();  //获取窗口句柄
//	SetWindowText(hwnd, L"Hello World!");
//
//	_getch();
//	closegraph();
//	return 0;
//}



//利用窗体句柄实现圆形窗口
int main()
{
	initgraph(200, 200);

	HWND hwnd = GetHWnd();

	//获取窗口边框宽高
	RECT rcClient, rcWind;
	GetClientRect(hwnd, &rcClient);
	GetWindowRect(hwnd, &rcWind);
	int cx = ((rcWind.right - rcWind.left) - rcClient.right) / 2;
	int cy = ((rcWind.bottom - rcWind.top + GetSystemMetrics(SM_CYCAPTION)) - rcClient.bottom) / 2;

	//设置圆形区域
	HRGN rgn = CreateEllipticRgn(0 + cx, 0 + cy, 200 + cx, 200 + cy);
	SetWindowRgn(hwnd, rgn, true);

	//画彩虹球
	setlinestyle(PS_SOLID, 2);
	for (int r = 99; r > 0; r--)
	{
		setlinecolor(HSLtoRGB(360 - r * 3.6f, 1, 0.5));
		circle(99, 99, r);
	}

	ExMessage m;
	while (true)
	{
		m = getmessage(EM_MOUSE);
		switch (m.message)
		{
		case WM_LBUTTONDOWN:
			PostMessage(hwnd, WM_NCLBUTTONDOWN, HTCAPTION, MAKELPARAM(m.x, m.y));
			break;
		case WM_RBUTTONUP:
			closegraph();
			return 0;
		}
	}

}