#pragma once
#include "CTeacher.h"
#include <iostream>
using namespace std;

class Counsellor:public CTeacher
{
public:
	//���캯��
	Counsellor(string name);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡ��λ����
	virtual string getDeptName();
};

