#pragma once
#include "CStudent.h"
#include <iostream>
#include <string>
using namespace std;

class Monitor:public CStudent
{
public:
	//构造函数
	Monitor(string name, int age, string sex, string id, string sid, string atime, int DId);

	//显示个人信息
	virtual void showInfo();

	//获取身份
	virtual string getDeptName();
};

