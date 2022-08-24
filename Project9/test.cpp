#include <iostream>
using namespace std;
#include "MyArray.hpp"
#include <string>

void printIntArray(MyArray <int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}

void test01()
{
	MyArray <int>arr1(5);

	for (int i = 0; i < 5; i++)
	{
		arr1.Push_Back(i);
	}
	printIntArray(arr1);
	cout << arr1.getCapacity() << endl;
	cout << arr1.getSize() << endl;

	cout << endl;
	MyArray<int>arr2(arr1);
	printIntArray(arr2);
	arr2.Pop_Back();
	cout << arr2.getCapacity() << endl;
	cout << arr2.getSize() << endl;
}

class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void printPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i].m_Name << "\t" << arr[i].m_Age << endl;
	}
}

void test02()
{
	MyArray<Person>arr3(10);
	Person p1("Ñ¬Îò¿Õ", 999);
	Person p2("¾Ó°Ë½ä", 9999);
	Person p3("É³²Î", 99999);
	Person p4("ÌÆ²Î", 999999);

	arr3.Push_Back(p1);
	arr3.Push_Back(p2);
	arr3.Push_Back(p3);
	arr3.Push_Back(p4);

	printPersonArray(arr3);
	cout << arr3.getCapacity() << endl;
	cout << arr3.getSize() << endl;
}

int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}