#pragma once
#include "CTeacher.h"
#include <iostream>
using namespace std;

class Teacher :public CTeacher
{
public:
	//���캯��
	Teacher(string name);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡ��λ����
	virtual string getDeptName();
};


