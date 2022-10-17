#include "Teacher.h"

Teacher::Teacher(string name)
{
	this->m_Name = name;
}

//显示个人信息
void Teacher::showInfo()
{
	cout << "老师姓名： " << this->m_Name
		<< "\t岗位： " << this->getDeptName()
		<< "\t岗位职责： 负责C++教学" << endl;
}

//获取岗位名称
string Teacher::getDeptName()
{
	return  string("老师");
}