#include <iostream>
using namespace std;
#include <string>

//ȫ�ֺ�������Ԫ
//class Building
//{
//	friend void goodGay(Building& building);
//
//public:
//	Building()
//	{
//		this->m_Sittingroom = "����";
//		this->m_Bedroom = "����";
//	}
//
//public:
//	string m_Sittingroom;
//
//private:
//	string m_Bedroom;
//};
//
//void goodGay(Building& building)
//{
//	cout << "�û������ڷ��ʣ�" << building.m_Sittingroom << endl;
//	cout << "�û������ڷ��ʣ�" << building.m_Bedroom << endl;
//}
//void test01()
//{
//	Building building;
//	goodGay(building);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}



//������Ԫ
//class Building;
//class goodGay
//{
//public:
//	goodGay();
//	void visit();
//private:
//	Building* building;
//};
//
//class Building
//{
//	friend class goodGay;
//
//public:
//	Building();
//public:
//	string m_Sittingroom;
//private:
//	string m_Bedroom;
//};
//����ʵ�ֹ��캯��
//Building::Building()
//{
//	this->m_Sittingroom = "����";
//	this->m_Bedroom = "����";
//}
//
//goodGay::goodGay()
//{
//	building = new Building;
//}
//
//void goodGay::visit()
//{
//	cout << "�û������ڷ��ʣ�" << building->m_Sittingroom << endl;
//	cout << "�û������ڷ��ʣ�" << building->m_Bedroom << endl;
//}
//
//void test02()
//{
//	goodGay gg;
//	gg.visit();
//}
//
//int main()
//{
//	test02();
//
//	system("pause");
//	return 0;
//}



//��Ա��������Ԫ
class Building;
class goodGay
{
public:
	goodGay();
	void visit();//��visit���Է���Building�е�˽�г�Ա
	void visit2();//��visit2���ܷ���Building�е�˽�г�Ա
	Building* building;
};
class Building
{
	friend void goodGay::visit();

public:
	Building();
public:
	string m_Sittingroom;
private:
	string m_Bedroom;
};

//����ʵ�ֳ�Ա����
Building::Building()
{
	m_Sittingroom = "����";
	m_Bedroom = "����";
}
goodGay::goodGay()
{
	building = new Building;
}
void goodGay::visit()
{
	cout << "vist " << building->m_Sittingroom << endl;
	cout << "vist " << building->m_Bedroom << endl;
}
void goodGay::visit2()
{
	cout << "vist2 " << building->m_Sittingroom << endl;
	//cout << "vist2 " << building->m_Bedroom << endl;
}

void test01()
{
	goodGay gg;
	gg.visit();
	gg.visit2();
}

int main()
{
	test01();

	system("pause");
	return 0;
}