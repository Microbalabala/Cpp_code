#include "Teacher.h"

Teacher::Teacher(string name)
{
	this->m_Name = name;
}

//��ʾ������Ϣ
void Teacher::showInfo()
{
	cout << "��ʦ������ " << this->m_Name
		<< "\t��λ�� " << this->getDeptName()
		<< "\t��λְ�� ����C++��ѧ" << endl;
}

//��ȡ��λ����
string Teacher::getDeptName()
{
	return  string("��ʦ");
}