#include <iostream>
using namespace std;
#include <string>

//全局函数做友元
//class Building
//{
//	friend void goodGay(Building& building);
//
//public:
//	Building()
//	{
//		this->m_Sittingroom = "客厅";
//		this->m_Bedroom = "卧室";
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
//	cout << "好基友正在访问：" << building.m_Sittingroom << endl;
//	cout << "好基友正在访问：" << building.m_Bedroom << endl;
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



//类做友元
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
//类外实现构造函数
//Building::Building()
//{
//	this->m_Sittingroom = "客厅";
//	this->m_Bedroom = "卧室";
//}
//
//goodGay::goodGay()
//{
//	building = new Building;
//}
//
//void goodGay::visit()
//{
//	cout << "好基友正在访问：" << building->m_Sittingroom << endl;
//	cout << "好基友正在访问：" << building->m_Bedroom << endl;
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



//成员函数做友元
class Building;
class goodGay
{
public:
	goodGay();
	void visit();//让visit可以访问Building中的私有成员
	void visit2();//让visit2不能访问Building中的私有成员
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

//类外实现成员函数
Building::Building()
{
	m_Sittingroom = "客厅";
	m_Bedroom = "卧室";
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