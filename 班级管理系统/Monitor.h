#pragma once
#include "CStudent.h"
#include <iostream>
#include <string>
using namespace std;

class Monitor:public CStudent
{
public:
	//���캯��
	Monitor(string name, int age, string sex, string id, string sid, string atime, int DId);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡ���
	virtual string getDeptName();
};

