#pragma once
#include "CStudent.h"
#include <iostream>
#include <string>
using namespace std;

class Student:public CStudent
{
public:
	//���캯��
	Student(string name, int age, string sex, string id, string sid, string atime, int DId);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡ���
	virtual string getDeptName();
};

