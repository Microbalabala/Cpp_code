#pragma once
#include <iostream>
using namespace std;
#include <string>

class CStudent
{
public:

	//��ʾ������Ϣ
	virtual void showInfo() = 0;

	//��ȡ���
	virtual string getDeptName() = 0;

	string m_Name;
	int m_Age;
	string m_Sex;
	string m_ID;
	string m_StudentID;
	string m_AdmissionTime;
	int m_DeptId;
};

