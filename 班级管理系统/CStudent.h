#pragma once
#include <iostream>
using namespace std;
#include <string>

class CStudent
{
public:

	//显示个人信息
	virtual void showInfo() = 0;

	//获取身份
	virtual string getDeptName() = 0;

	string m_Name;
	int m_Age;
	string m_Sex;
	string m_ID;
	string m_StudentID;
	string m_AdmissionTime;
	int m_DeptId;
};

