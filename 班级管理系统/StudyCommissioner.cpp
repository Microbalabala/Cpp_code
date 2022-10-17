#include "StudyCommissioner.h"

StudyCommissioner::StudyCommissioner(string name, int age, string sex, string id, string sid, string atime, int dId)
{
	this->m_Name = name;
	this->m_Age = age;
	this->m_Sex = sex;
	this->m_ID = id;
	this->m_StudentID = sid;
	this->m_AdmissionTime = atime;
	this->m_DeptId = dId;
}

void StudyCommissioner::showInfo()
{
	cout << "学生姓名: " << this->m_Name
		<< "\t年龄: " << this->m_Age
		<< "\t性别: " << this->m_Sex
		<< "\t身份证号: " << this->m_ID
		<< "\t学号: " << this->m_StudentID
		<< "\t入学时间: " << this->m_AdmissionTime
		<< "\t身份: " << this->getDeptName()
		<< "\t职责: 管理班级学生的学习情况" << endl;
}

string StudyCommissioner::getDeptName()
{
	return string("学习委员");
}