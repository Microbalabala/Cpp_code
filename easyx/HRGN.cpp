//#include <graphics.h>
//#include <conio.h>
//
//int main()
//{
//	// ��ʼ����ͼ����
//	initgraph(640, 480);
//
//	// ����һ����������
//	HRGN rgn = CreateRectRgn(100, 100, 200, 200);
//	// ���þ�����������Ϊ�ü���
//	setcliprgn(rgn);
//	// ����ʹ�� rgn������ rgn ռ�õ�ϵͳ��Դ
//	DeleteObject(rgn);
//
//	// ��Բ���ܲü���Ӱ�죬ֻ��ʾ���Ķ�Բ��
//	circle(150, 150, 55);
//
//	// ȡ��֮ǰ���õĲü���
//	setcliprgn(NULL);
//
//	// ��Բ�������ܲü���Ӱ�죬��ʾ��һ��������Բ
//	circle(150, 150, 60);
//
//	// ��������˳�
//	_getch();
//	closegraph();
//}