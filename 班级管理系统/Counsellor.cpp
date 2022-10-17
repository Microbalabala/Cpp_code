#include "Counsellor.h"

Counsellor::Counsellor(string name)
{
	this->m_Name = name;
}

//显示个人信息
void Counsellor::showInfo()
{
	cout << "辅导员姓名： " << this->m_Name
		<< "\t岗位： " << this->getDeptName()
		<< "\t岗位职责： 管理班级所有事务" << endl;
}

//获取岗位名称
string Counsellor::getDeptName()
{
	return  string("辅导员");
}