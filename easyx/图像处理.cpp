#include <graphics.h>
#include <conio.h>


//����ͼƬ
//1.����IMAGE����
//2.��ȡͼƬ��IMAGE����
//3.��ʾIMAGE����ָ����λ��
//int main()
//{
//	initgraph(640, 480);
//	
//	IMAGE img;  //����IMAGE����
//	loadimage(&img, _T("D:\\QQͷ��.jpg"));  //��ȡͼƬ��img������
//	putimage(0, 0, &img);  //�����꣨0��0��λ����ʾimage����
//
//	_getch();
//	closegraph();
//	return 0;
//}


//������Ļ����
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
//	getimage(&img, 70, 70, 60, 60);  //����������img����
//
//	putimage(200, 200, &img);  //��img������ʾ����Ļ��ĳ��λ��
//
//	_getch();
//	closegraph();
//	return 0;
//}