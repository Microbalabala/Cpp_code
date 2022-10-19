#include <graphics.h>

//获取鼠标消息
//ExMessage m;
//m = getmessage();
//ExMessage是EasyX定义的一个表示消息的结构体类型

//以下程序会用红色的点标出鼠标移动的轨迹，按左键画一个小方块，按Ctrl+左键画一个大方块，按右键退出
//int main()
//{
//	initgraph(640, 480);
//	ExMessage m;
//	while (true)
//	{
//		//获取一条鼠标或按键消息
//		m = getmessage(EM_MOUSE | EM_KEY);
//
//		switch (m.message)
//		{
//		case WM_MOUSEMOVE:
//			putpixel(m.x, m.y, RED);
//			break;
//		case WM_LBUTTONDOWN:
//			if (m.ctrl)
//			{
//				rectangle(m.x - 10, m.y - 10, m.x + 10, m.y + 10);
//			}
//			else
//			{
//				rectangle(m.x - 5, m.y - 5, m.x + 5, m.y + 5);
//			}
//			break;
//		case WM_KEYDOWN:
//			if (m.vkcode == VK_ESCAPE)
//			{
//				return 0;//按ESC退出程序
//			}
//		}
//	}
//	closegraph();
//	return 0;
//}

//鼠标跟随效果
//int main()
//{
//	initgraph(640, 480);
//	int x[10] = { 0 }, y[10] = { 0 };
//	ExMessage m;
//	while (true)
//	{
//		//获取键盘消息
//		//用while而不用if，是因为可能鼠标消息的产生速率会超过Sleep(20)
//		//如果用if，会造成鼠标消息堆积产生延时效果
//		while (peekmessage(&m, EM_MOUSE))
//		{
//			if (m.message == WM_MOUSEMOVE)
//			{
//				putpixel(m.x, m.y, GREEN);
//			}
//		}
//		//计算跟随点的坐标(同时擦掉最末尾一个点)
//		setlinecolor(BLACK);
//		circle(x[9], y[9], 5);
//		for (int i = 9; i > 0; i--)
//		{
//			x[i] = x[i - 1];
//			y[i] = y[i - 1];
//		}
//		//计算头节点的坐标，向着鼠标当前位置移动
//		x[0] += (m.x - x[0]) / 4;
//		y[0] += (m.y - y[0]) / 4;
//		setlinecolor(RED);
//		circle(x[0], y[0], 5);
//
//		Sleep(20);
//	}
//	closegraph();
//	return 0;
//}