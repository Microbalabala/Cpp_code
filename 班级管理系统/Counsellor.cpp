#include "Counsellor.h"

Counsellor::Counsellor(string name)
{
	this->m_Name = name;
}

//��ʾ������Ϣ
void Counsellor::showInfo()
{
	cout << "����Ա������ " << this->m_Name
		<< "\t��λ�� " << this->getDeptName()
		<< "\t��λְ�� ����༶��������" << endl;
}

//��ȡ��λ����
string Counsellor::getDeptName()
{
	return  string("����Ա");
}