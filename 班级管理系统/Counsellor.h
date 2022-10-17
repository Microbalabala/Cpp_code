#pragma once
#include "CTeacher.h"
#include <iostream>
using namespace std;

class Counsellor:public CTeacher
{
public:
	//构造函数
	Counsellor(string name);

	//显示个人信息
	virtual void showInfo();

	//获取岗位名称
	virtual string getDeptName();
};

