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
	cout << "ѧ������: " << this->m_Name
		<< "\t����: " << this->m_Age
		<< "\t�Ա�: " << this->m_Sex
		<< "\t���֤��: " << this->m_ID
		<< "\tѧ��: " << this->m_StudentID
		<< "\t��ѧʱ��: " << this->m_AdmissionTime << endl;
}