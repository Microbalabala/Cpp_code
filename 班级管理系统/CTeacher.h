#pragma once
#include <iostream>
#include <string>
using namespace std;


class CTeacher
{
public:

	//显示个人信息
	virtual void showInfo() = 0;

	//获取岗位名称
	virtual string getDeptName() = 0;

	//教师姓名
	string m_Name;
};