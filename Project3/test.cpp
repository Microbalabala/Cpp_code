#include <iostream>
using namespace std;
#include <string>

//const double PI = 3.14;
//
////��װһ��Բ�࣬��Բ���ܳ�
//class Circle
//{
//	//����Ȩ�ޣ�������Ȩ��
//public:
//
//	//����
//	int m_r;//�뾶
//
//	//��Ϊ
//	//��ȡԲ���ܳ�
//	double calculateC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//
//int main()
//{
//	//ͨ��Բ�ഴ��Բ�Ķ���
//	Circle c1;
//	c1.m_r = 10;
//
//	cout << c1.calculateC() << endl;
//
//	system("pause");
//	return 0;
//}



//���һ��ѧ���࣬������������ѧ��
//���Ը�������ѧ�Ÿ���ֵ��������ʾѧ��������ѧ��

//class Student
//{
//public:
//
//	//����
//	string m_Name;
//	int m_ID;
//
//	//��Ϊ
//	void showStudent()
//	{
//		cout << "������" << m_Name << "\t" << "ѧ�ţ�" << m_ID << endl;
//	}
//
//	//ͨ����Ϊ�����Ը�ֵ
//	void getm_Nmae(string name)
//	{
//		m_Name = name;
//	}
//
//	void getm_ID(int ID)
//	{
//		m_ID = ID;
//	}
//};
//
//int main()
//{
//	//ʵ��������
//	Student s1;
//	//���Ը�ֵ
//	s1.m_Name = "����";
//	s1.m_ID = 1111111;
//	//��ʾѧ����Ϣ
//	s1.showStudent();
//
//	Student s2;
//	s2.getm_Nmae("����");
//	s2.getm_ID(322222);
//	s2.showStudent();
//
//	system("pause");
//	return 0;
//}



//��װ����
//�����������
//1.������������
//2.�������
//3.�����Ϊ ��ȡ��������������
//4.�ֱ�����ȫ�ֺ����ͳ�Ա���� �ж������������Ƿ����

//class Cube
//{
//public:
//	//���ó�
//	void setL(int L)
//	{
//		m_L = L;
//	}
//	//��ȡ��
//	int getL()
//	{
//		return m_L;
//	}
//	//���ÿ�
//	void setW(int W)
//	{
//		m_W = W;
//	}
//	//��ȡ��
//	int getW()
//	{
//		return m_W;
//	}
//	//���ø�
//	void setH(int H)
//	{
//		m_H = H;
//	}
//	//��ȡ��
//	int getH()
//	{
//		return m_H;
//	}
//	//��ȡ���������
//	int calculataS()
//	{
//		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
//	}
//	//��ȡ���������
//	int calculateV()
//	{
//		return m_L * m_W * m_H;
//	}
//
//	//���ó�Ա�����ж����������Ƿ����
//	bool isSameByClass(Cube& c)
//	{
//		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
//		{
//			return true;
//		}
//
//		return false;
//	}
//
//private:
//	int m_L;//��
//	int m_W;//��
//	int m_H;//��
//
//};
//
////����ȫ�ֺ����ж������������Ƿ����
//bool isSame(Cube& c1, Cube& c2)
//{
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
//	{
//		return true;
//	}
//
//	return false;
//}
//
//int main()
//{
//	//�������������
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//	cout << "�����" << c1.calculataS() << endl;
//	cout << "�����" << c1.calculateV() << endl;
//
//	//�����ڶ������������
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(11);
//
//	//����ȫ�ֺ����ж����������Ƿ����
//	bool ret = isSame(c1, c2);
//	if (ret)
//	{
//		cout << "�����������" << endl;
//	}
//	else
//	{
//		cout << "�������岻���" << endl;
//	}
//
//	//���ó�Ա�����ж����������Ƿ����
//	bool ret2 = c1.isSameByClass(c2);
//	if (ret2)
//	{
//		cout << "�����������" << endl;
//	}
//	else
//	{
//		cout << "�������岻���" << endl;
//	}
//
//	system("pause");
//	return 0;
//}



//����2
//���һ��Բ�����һ�����࣬�жϵ��Բ�Ĺ�ϵ

//����
//class Point
//{
//public:
//	//���ú�����
//	void setAbscissa(int abscissa)
//	{
//		Abscissa = abscissa;
//	}
//	//��ȡ������
//	int getAbscissa()
//	{
//		return Abscissa;
//	}
//	//����������
//	void setOrdinate(int ordinate)
//	{
//		Ordinate = ordinate;
//	}
//	//��ȡ������
//	int getOrdinate()
//	{
//		return Ordinate;
//	}
//
//private:
//	int Abscissa;//������
//	int Ordinate;//������
//};

//Բ��
//class Circle
//{
//public:
//	//���ð뾶
//	void setRadius(int r)
//	{
//		Radius = r;
//	}
//	//��ȡ�뾶
//	int getRadius()
//	{
//		return Radius;
//	}
//	//����Բ��
//	void setCenter(Point center)
//	{
//		Center = center;
//	}
//	//��ȡԲ��
//	Point getCenter()
//	{
//		return Center;
//	}
//
//private:
//	int Radius;
//	Point Center;
//};

#include "circle.h"
#include "point.h"

//�жϺ���
void isInCircle(Circle &c, Point &p)
{
	//��������֮��ľ����ƽ��
	int distance =
		(c.getCenter().getAbscissa() - p.getAbscissa()) * (c.getCenter().getAbscissa() - p.getAbscissa()) +
		(c.getCenter().getOrdinate() - p.getOrdinate()) * (c.getCenter().getOrdinate() - p.getOrdinate());

	//����뾶��ƽ��
	int Rdistance = c.getRadius() * c.getRadius();

	//�жϹ�ϵ
	if (distance == Rdistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > Rdistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}

int main()
{
	//����Բ
	Circle c;
	c.setRadius(10);
	Point center;
	center.setAbscissa(10);
	center.setOrdinate(0);
	c.setCenter(center);

	//������
	Point p;
	p.setAbscissa(10);
	p.setOrdinate(9);

	//�жϹ�ϵ
	isInCircle(c, p);

	system("pause");
	return 0;
}