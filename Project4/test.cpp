#include <iostream>
using namespace std;

//���캯���������������������캯���������
//class Person
//{
//public:
//	//�޲�(Ĭ�ϣ����캯��
//	Person()
//	{
//		cout << "�޲ι��캯���ĵ���" << endl;
//	}
//
//	//�вι��캯��
//	Person(int a)
//	{
//		age = a;
//		cout << "�вκ����ĵ���" << endl;
//	}
//
//	//�������캯��
//	Person(const Person& p)
//	{
//		age = p.age;
//		cout << "�������캯���ĵ���" << endl;
//	}
//
//	//��������
//	~Person()
//	{
//		cout << "���������ĵ���" << endl;
//	}
//
//public:
//	int age;
//};
//
////���캯���ĵ���
////�����޲ι��캯��
//void test01()
//{
//	Person p;
//}
//
////�����вι��캯��
//void test02()
//{
//	//���ŷ�
//	Person p1(10);
//	Person p6(p1);
//
//	cout << "p6������Ϊ��" << p6.age << endl;
//
//	//��ʽ��
//	Person p2 = Person(10);
//	Person p3 = Person(p2);
//
//	//��ʽת����
//	Person p4 = 10;//Person p4 = Person(10)
//	Person p5 = p4;//Person p5 = Person(p4)
//}
//
////ֵ���ݵķ�ʽ��������ֵ
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
////ֵ��ʽ���ؾֲ�����
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



//ǳ���������
//����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ�������캯������ֹǳ��������������
//class Person
//{
//public:
//	Person()
//	{
//		cout << "�޲ι��캯��" << endl;
//	}
//
//	Person(int age, int height)
//	{
//		cout << "�вι��캯��" << endl;
//		m_age = age;
//		m_height = new int(height);
//	}
//	Person(const Person& p)
//	{
//		cout << "�������캯��" << endl;
//		m_age = p.m_age;
//		m_height = new int(*p.m_height);
//	}
//	~Person()
//	{
//		cout << "��������" << endl;
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
//	cout << "p1������: " << p1.m_age << "���: " << *p1.m_height << endl;
//	cout << "p2������: " << p2.m_age << "���: " << *p2.m_height << endl;
//}
//
//int main()
//{
//	test();
//
//	system("pause");
//	return 0;
//}