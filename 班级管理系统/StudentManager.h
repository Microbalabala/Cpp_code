#pragma once
//与用户的沟通菜单界面
//对学生增删改查的操作
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
	//构造函数
	StudentManager();

	//展示菜单
	void show_Menu();

	//退出系统
	void exitSystem();

	//判断身份证号是否合法
	bool Check_Sid(string id);

	//增加老师
	void Add_Teacher();

	//显示老师
	void Show_Teacher();

	//增加学生
	void Add_Stu();

	//显示学生
	void Show_Stu();

	//删除，修改，查找程序都需要判断该学生是否存在,所以直接封装一个IsExit()函数
	//按照学生学号判断学号是否存在,若存在返回学号在数组中位置，不存在返回-1
	int IsExist(string sid);

	//删除学生
	void Del_Stu();

	//修改学生
	void Mod_Stu();

	//查找学生
	void Find_Stu();

	//排序
	void Sort_Stu();

	//清空文档
	void Clear_File();

	//析构函数
	~StudentManager();


	//用户在批量创建时，可能会创建不同种类的学生
	//如果想将所有不同种类的学生都放入到一个数组中，可以将所有学生的指针维护到一个数组里
	//如果想在程序中维护这个不定长度的数组，可以将数组创建到堆区，并利用CStudent** 的指针维护
	
	//记录人数个数
	int m_StuNum;

	//学生数组的指针
	CStudent** m_StuArray;

	int m_TeacherNum;

	//老师数组的指针
	CTeacher** m_TeacherArray;
};

