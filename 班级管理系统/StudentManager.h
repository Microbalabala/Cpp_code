#pragma once
//与用户的沟通菜单界面
//对学生增删改查的操作
#include <iostream>
using namespace std;
#include "Student.h"


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

private:
	//记录人数个数
	int m_StuNum;

	//学生数组的指针
	Student** m_StuArray;

};

