#include <iostream>
using namespace std;
#include <string>

//const double PI = 3.14;
//
////封装一个圆类，求圆的周长
//class Circle
//{
//	//访问权限，公共的权限
//public:
//
//	//属性
//	int m_r;//半径
//
//	//行为
//	//获取圆的周长
//	double calculateC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//
//int main()
//{
//	//通过圆类创建圆的对象
//	Circle c1;
//	c1.m_r = 10;
//
//	cout << c1.calculateC() << endl;
//
//	system("pause");
//	return 0;
//}



//设计一个学生类，属性有姓名和学号
//可以给姓名和学号复赋值，可以显示学生姓名和学号

//class Student
//{
//public:
//
//	//属性
//	string m_Name;
//	int m_ID;
//
//	//行为
//	void showStudent()
//	{
//		cout << "姓名：" << m_Name << "\t" << "学号：" << m_ID << endl;
//	}
//
//	//通过行为给属性赋值
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
//	//实例化对象
//	Student s1;
//	//属性赋值
//	s1.m_Name = "张三";
//	s1.m_ID = 1111111;
//	//显示学生信息
//	s1.showStudent();
//
//	Student s2;
//	s2.getm_Nmae("李四");
//	s2.getm_ID(322222);
//	s2.showStudent();
//
//	system("pause");
//	return 0;
//}



//封装案例
//立方体类设计
//1.创建立方体类
//2.设计属性
//3.设计行为 获取立方体面积和体积
//4.分别利用全局函数和成员函数 判断两个立方体是否相等

//class Cube
//{
//public:
//	//设置长
//	void setL(int L)
//	{
//		m_L = L;
//	}
//	//获取长
//	int getL()
//	{
//		return m_L;
//	}
//	//设置宽
//	void setW(int W)
//	{
//		m_W = W;
//	}
//	//获取宽
//	int getW()
//	{
//		return m_W;
//	}
//	//设置高
//	void setH(int H)
//	{
//		m_H = H;
//	}
//	//获取高
//	int getH()
//	{
//		return m_H;
//	}
//	//获取立方体面积
//	int calculataS()
//	{
//		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
//	}
//	//获取立方体体积
//	int calculateV()
//	{
//		return m_L * m_W * m_H;
//	}
//
//	//利用成员函数判断两立方体是否相等
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
//	int m_L;//长
//	int m_W;//宽
//	int m_H;//高
//
//};
//
////利用全局函数判断两个立方体是否相等
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
//	//创建立方体对象
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//	cout << "面积：" << c1.calculataS() << endl;
//	cout << "体积：" << c1.calculateV() << endl;
//
//	//创建第二个立方体对象
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(11);
//
//	//利用全局函数判断两立方体是否相等
//	bool ret = isSame(c1, c2);
//	if (ret)
//	{
//		cout << "两立方体相等" << endl;
//	}
//	else
//	{
//		cout << "两立方体不相等" << endl;
//	}
//
//	//利用成员函数判断两立方体是否相等
//	bool ret2 = c1.isSameByClass(c2);
//	if (ret2)
//	{
//		cout << "两立方体相等" << endl;
//	}
//	else
//	{
//		cout << "两立方体不相等" << endl;
//	}
//
//	system("pause");
//	return 0;
//}



//案例2
//设计一个圆形类和一个点类，判断点和圆的关系

//点类
//class Point
//{
//public:
//	//设置横坐标
//	void setAbscissa(int abscissa)
//	{
//		Abscissa = abscissa;
//	}
//	//获取横坐标
//	int getAbscissa()
//	{
//		return Abscissa;
//	}
//	//设置纵坐标
//	void setOrdinate(int ordinate)
//	{
//		Ordinate = ordinate;
//	}
//	//获取纵坐标
//	int getOrdinate()
//	{
//		return Ordinate;
//	}
//
//private:
//	int Abscissa;//横坐标
//	int Ordinate;//纵坐标
//};

//圆类
//class Circle
//{
//public:
//	//设置半径
//	void setRadius(int r)
//	{
//		Radius = r;
//	}
//	//获取半径
//	int getRadius()
//	{
//		return Radius;
//	}
//	//设置圆心
//	void setCenter(Point center)
//	{
//		Center = center;
//	}
//	//获取圆心
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

//判断函数
void isInCircle(Circle &c, Point &p)
{
	//计算两点之间的距离的平方
	int distance =
		(c.getCenter().getAbscissa() - p.getAbscissa()) * (c.getCenter().getAbscissa() - p.getAbscissa()) +
		(c.getCenter().getOrdinate() - p.getOrdinate()) * (c.getCenter().getOrdinate() - p.getOrdinate());

	//计算半径的平方
	int Rdistance = c.getRadius() * c.getRadius();

	//判断关系
	if (distance == Rdistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > Rdistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}

int main()
{
	//创建圆
	Circle c;
	c.setRadius(10);
	Point center;
	center.setAbscissa(10);
	center.setOrdinate(0);
	c.setCenter(center);

	//创建点
	Point p;
	p.setAbscissa(10);
	p.setOrdinate(9);

	//判断关系
	isInCircle(c, p);

	system("pause");
	return 0;
}