#pragma once
//���û��Ĺ�ͨ�˵�����
//��ѧ����ɾ�Ĳ�Ĳ���
#include <iostream>
using namespace std;
#include "Student.h"


class StudentManager
{
public:
	//���캯��
	StudentManager();

	//չʾ�˵�
	void show_Menu();

	//�˳�ϵͳ
	void exitSystem();

	//�ж����֤���Ƿ�Ϸ�
	bool Check_Sid(string id);

	//����ѧ��
	void Add_Stu();

	//��ʾѧ��
	void Show_Stu();

	//ɾ�����޸ģ����ҳ�����Ҫ�жϸ�ѧ���Ƿ����,����ֱ�ӷ�װһ��IsExit()����
	//����ѧ��ѧ���ж�ѧ���Ƿ����,�����ڷ���ѧ����������λ�ã������ڷ���-1
	int IsExist(string sid);

	//ɾ��ѧ��
	void Del_Stu();

	//�޸�ѧ��
	void Mod_Stu();

	//����ѧ��
	void Find_Stu();

	//����
	void Sort_Stu();

	//����ĵ�
	void Clear_File();

	//��������
	~StudentManager();

private:
	//��¼��������
	int m_StuNum;

	//ѧ�������ָ��
	Student** m_StuArray;

};

