#pragma once
#include "CStudent.h"
#include <iostream>
using namespace std;

class TuanZhishu:public CStudent
{
public:
	//���캯��
	TuanZhishu(string name, int age, string sex, string id, string sid, string atime, int DId);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡ���
	virtual string getDeptName();
};

