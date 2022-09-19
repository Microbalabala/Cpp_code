#include "Student.h"

Student::Student(string name, int age, string sex, string id, string sid, string atime)
{
	this->m_Name = name;
	this->m_Age = age;
	this->m_Sex = sex;
	this->m_ID = id;
	this->m_StudentID = sid;
	this->m_AdmissionTime = atime;
}

void Student::showInfo()
{
	cout << "学生姓名: " << this->m_Name
		<< "\t年龄: " << this->m_Age
		<< "\t性别: " << this->m_Sex
		<< "\t身份证号: " << this->m_ID
		<< "\t学号: " << this->m_StudentID
		<< "\t入学时间: " << this->m_AdmissionTime << endl;
}