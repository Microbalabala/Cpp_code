#pragma once
#include <iostream>
#include <string>
using namespace std;


class CTeacher
{
public:

	//��ʾ������Ϣ
	virtual void showInfo() = 0;

	//��ȡ��λ����
	virtual string getDeptName() = 0;

	//��ʦ����
	string m_Name;
};