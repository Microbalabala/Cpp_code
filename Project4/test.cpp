#include <iostream>
using namespace std;

//构造函数，析构函数，拷贝构造函数及其调用
//class Person
//{
//public:
//	//无参(默认）构造函数
//	Person()
//	{
//		cout << "无参构造函数的调用" << endl;
//	}
//
//	//有参构造函数
//	Person(int a)
//	{
//		age = a;
//		cout << "有参函数的调用" << endl;
//	}
//
//	//拷贝构造函数
//	Person(const Person& p)
//	{
//		age = p.age;
//		cout << "拷贝构造函数的调用" << endl;
//	}
//
//	//析构函数
//	~Person()
//	{
//		cout << "析构函数的调用" << endl;
//	}
//
//public:
//	int age;
//};
//
////构造函数的调用
////调用无参构造函数
//void test01()
//{
//	Person p;
//}
//
////调用有参构造函数
//void test02()
//{
//	//括号法
//	Person p1(10);
//	Person p6(p1);
//
//	cout << "p6的年龄为：" << p6.age << endl;
//
//	//显式法
//	Person p2 = Person(10);
//	Person p3 = Person(p2);
//
//	//隐式转换法
//	Person p4 = 10;//Person p4 = Person(10)
//	Person p5 = p4;//Person p5 = Person(p4)
//}
//
////值传递的方式给函数赋值
//void doWork(Person p)
//{
//
//}
//void test03()
//{
//	Person p1;
//	doWork(p1);
//}
//
////值方式返回局部对象
//Person doWork2()
//{
//	Person p2;
//	return p2;
//}
//void test04()
//{
//	Person p = doWork2();
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	//test03();
//
//	//test04();
//
//	system("pause");
//	return 0;
//}



//浅拷贝与深拷贝
//如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题
//class Person
//{
//public:
//	Person()
//	{
//		cout << "无参构造函数" << endl;
//	}
//
//	Person(int age, int height)
//	{
//		cout << "有参构造函数" << endl;
//		m_age = age;
//		m_height = new int(height);
//	}
//	Person(const Person& p)
//	{
//		cout << "拷贝构造函数" << endl;
//		m_age = p.m_age;
//		m_height = new int(*p.m_height);
//	}
//	~Person()
//	{
//		cout << "析构函数" << endl;
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//	}
//
//public:
//	int m_age;
//	int* m_height;
//};
//
//void test()
//{
//	Person p1(18, 180);
//	Person p2(p1);
//	cout << "p1的年龄: " << p1.m_age << "身高: " << *p1.m_height << endl;
//	cout << "p2的年龄: " << p2.m_age << "身高: " << *p2.m_height << endl;
//}
//
//int main()
//{
//	test();
//
//	system("pause");
//	return 0;
//}