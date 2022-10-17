#pragma once
//���û��Ĺ�ͨ�˵�����
//��ѧ����ɾ�Ĳ�Ĳ���
#include <iostream>
using namespace std;
#include "CStudent.h"
#include "Monitor.h"
#include "Student.h"
#include "StudyCommissioner.h"
#include "TuanZhishu.h"
#include "Counsellor.h"
#include "CTeacher.h"
#include "Teacher.h"
#include <vector>


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

	//������ʦ
	void Add_Teacher();

	//��ʾ��ʦ
	void Show_Teacher();

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


	//�û�����������ʱ�����ܻᴴ����ͬ�����ѧ��
	//����뽫���в�ͬ�����ѧ�������뵽һ�������У����Խ�����ѧ����ָ��ά����һ��������
	//������ڳ�����ά������������ȵ����飬���Խ����鴴����������������CStudent** ��ָ��ά��
	
	//��¼��������
	int m_StuNum;

	//ѧ�������ָ��
	CStudent** m_StuArray;

	int m_TeacherNum;

	//��ʦ�����ָ��
	CTeacher** m_TeacherArray;
};

