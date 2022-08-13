#include <iostream>
using namespace std;


// +号重载
//class Person
//{
//public:
//	//1.成员函数重载+号
//	/*Person operator+(Person& p)
//	{
//		Person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}*/
//
//	int m_A;
//	int m_B;
//};
//
////2.全局函数重载+号
//Person operator+(Person& p1, Person& p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//
//void test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 20;
//	Person p2;
//	p2.m_A = 30;
//	p2.m_B = 40;
//
//	//成员函数重载本质调用
//	//Person p3 = p1.operator+(p2);
//	
//	//全局函数重载本质调用
//	//Person p3 = operator+(p1, p2);
//	
//	Person p3 = p1 + p2;
//	cout << p3.m_A << endl;
//	cout << p3.m_B << endl;
//}


//左移运算符重载
//只能用全家函数进行重载

//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//
//public:
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//
//private:
//	int m_A;
//	int m_B;
//};
//
//ostream& operator<<(ostream& cout, Person& p)
//{
//	cout << p.m_A << " " << p.m_B;
//	return cout;
//}
//
//void test02()
//{
//	Person p(10, 20);
//
//	/*Person p;
//	p.m_A = 10;
//	p.m_B = 20;*/
//
//	cout << p << endl;
//}



//递增运算符重载
//class MyInt
//{
//	friend ostream& operator<<(ostream& cout, MyInt myint);
//
//public:
//	MyInt()
//	{
//		m_Num = 0;
//	}
//
//	//重载前置++运算符
//	MyInt& operator++()
//	{
//		m_Num++;
//		return *this;
//	}
//
//	//重载后置++运算符
//	MyInt operator++(int)
//	{
//		MyInt temp = *this;
//		m_Num++;
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
//
//ostream& operator<<(ostream& cout, MyInt myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test03()
//{
//	MyInt myint;
//	cout << ++(++myint) << endl;
//}
//
//void test04()
//{
//	MyInt myint;
//	cout << myint++ << endl;
//	cout << myint << endl;
//}



//递减运算符重载
//class MyInt
//{
//	friend ostream& operator<<(ostream& cout, MyInt myint);
//
//public:
//	MyInt()
//	{
//		m_Num = 0;
//	}
//
//	//重载前置--运算符
//	MyInt& operator--()
//	{
//		m_Num--;
//		return *this;
//	}
//
//	//重载后置--运算符
//	MyInt operator--(int)
//	{
//		MyInt temp = *this;
//		m_Num--;
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
//
//ostream& operator<<(ostream& cout, MyInt myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test05()
//{
//	MyInt myint;
//	cout << --(--myint) << endl;
//}
//
//void test06()
//{
//	MyInt myint;
//	cout << myint-- << endl;
//	cout << myint << endl;
//}


//重载赋值运算符
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);//开辟到堆区
//	}
//
//	//重载
//	Person& operator=(Person& p)
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//
//		//提供深拷贝
//		m_Age = new int(*p.m_Age);
//		return *this;
//	}
//
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//
//	int* m_Age;
//};
//
//void test07()
//{
//	Person p1(10);
//	Person p2(20);
//	Person p3(30);
//
//	p3 = p2 = p1;
//	cout << *p1.m_Age << endl;
//	cout << *p2.m_Age << endl;
//	cout << *p3.m_Age << endl;
//}


//函数调用运算符重载
//打印输出类
class MyPrint
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void test08()
{
	MyPrint myprint;
	myprint("hello world");//仿函数
}

int main()
{
	//test01();
	
	//test02();
	
	//test03();
	//test04();

	//test05();
	//test06();

	//test07();

	test08();

	system("pause");
	return 0;
}