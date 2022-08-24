//#include <iostream>
//using namespace std;
//#include <string>
//#include <vector>
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	vector<Person>v;
//	Person p1("aaa", 111);
//	Person p2("bbb", 222);
//	Person p3("ccc", 333);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it).m_Name << "\t" << (*it).m_Age << endl;
//		cout << it->m_Name << "\t" << it->m_Age << endl;
//	}
//}
//
////存放自定义数据类型  指针
//void test02()
//{
//	vector<Person*>v;
//	Person p1("aaa", 111);
//	Person p2("bbb", 222);
//	Person p3("ccc", 333);
//
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it)->m_Name << "\t" << (*it)->m_Age << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}