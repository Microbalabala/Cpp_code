#pragma once
#include <iostream>
using namespace std;
#include <string>

class Student
{
	friend class StudentManager;

public:

	//构造函数
	Student(string name, int age, string sex, string id, string sid, string atime);

	//显示个人信息
	void showInfo();

private:
	string m_Name;
	int m_Age;
	string m_Sex;
	string m_ID;
	string m_StudentID;
	string m_AdmissionTime;
};

