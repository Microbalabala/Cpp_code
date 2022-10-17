#include "Monitor.h"
#include "Student.h"

Monitor::Monitor(string name, int age, string sex, string id, string sid, string atime, int dId)
{
	this->m_Name = name;
	this->m_Age = age;
	this->m_Sex = sex;
	this->m_ID = id;
	this->m_StudentID = sid;
	this->m_AdmissionTime = atime;
	this->m_DeptId = dId;
}

void Monitor::showInfo()
{
	cout << "ѧ������: " << this->m_Name
		<< "\t����: " << this->m_Age
		<< "\t�Ա�: " << this->m_Sex
		<< "\t���֤��: " << this->m_ID
		<< "\tѧ��: " << this->m_StudentID
		<< "\t��ѧʱ��: " << this->m_AdmissionTime
		<< "\t���: " << this->getDeptName()
		<< "\tְ��: Э����ʦ����༶����" << endl;
}

string Monitor::getDeptName()
{
	return string("�೤");
}