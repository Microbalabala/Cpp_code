#include <graphics.h>

//��ȡ�����Ϣ
//ExMessage m;
//m = getmessage();
//ExMessage��EasyX�����һ����ʾ��Ϣ�Ľṹ������

//���³�����ú�ɫ�ĵ�������ƶ��Ĺ켣���������һ��С���飬��Ctrl+�����һ���󷽿飬���Ҽ��˳�
//int main()
//{
//	initgraph(640, 480);
//	ExMessage m;
//	while (true)
//	{
//		//��ȡһ�����򰴼���Ϣ
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
//				return 0;//��ESC�˳�����
//			}
//		}
//	}
//	closegraph();
//	return 0;
//}

//������Ч��
//int main()
//{
//	initgraph(640, 480);
//	int x[10] = { 0 }, y[10] = { 0 };
//	ExMessage m;
//	while (true)
//	{
//		//��ȡ������Ϣ
//		//��while������if������Ϊ���������Ϣ�Ĳ������ʻᳬ��Sleep(20)
//		//�����if������������Ϣ�ѻ�������ʱЧ��
//		while (peekmessage(&m, EM_MOUSE))
//		{
//			if (m.message == WM_MOUSEMOVE)
//			{
//				putpixel(m.x, m.y, GREEN);
//			}
//		}
//		//�������������(ͬʱ������ĩβһ����)
//		setlinecolor(BLACK);
//		circle(x[9], y[9], 5);
//		for (int i = 9; i > 0; i--)
//		{
//			x[i] = x[i - 1];
//			y[i] = y[i - 1];
//		}
//		//����ͷ�ڵ�����꣬������굱ǰλ���ƶ�
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