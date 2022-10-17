#include "StudentManager.h"


StudentManager::StudentManager()
{
	//初始化人数
	this->m_StuNum = 0;
	//初始化数组指针
	this->m_StuArray = NULL;

	this->m_TeacherNum = 2;

	this->m_TeacherArray = NULL;
}

void StudentManager::show_Menu()
{
	cout << "**************************************" << endl;
	cout << "******* 欢迎使用班级管理系统！ *******" << endl;
	cout << "*********** 0.退出管理系统 ***********" << endl;
	cout << "*********** 1.增加学生信息 ***********" << endl;
	cout << "*********** 2.显示学生信息 ***********" << endl;
	cout << "*********** 3.删除离校学生 ***********" << endl;
	cout << "*********** 4.修改学生信息 ***********" << endl;
	cout << "*********** 5.查找学生信息 ***********" << endl;
	cout << "*********** 6.按照学号排序 ***********" << endl;
	cout << "*********** 7.清空所有文档 ***********" << endl;
	cout << "*********** 8.显示老师信息 ***********" << endl;
	cout << "**************************************" << endl;
	cout << endl;
}

void StudentManager::exitSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}

bool StudentManager::Check_Sid(string id)
{
	int weight[] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	char validate[] = { '1','0','X','9','8','7','6','5','4','3','2' };
	int sum = 0;
	int mode = 0;
	if (id.size() == 18)
	{
		for (int i = 0; i < id.size() - 1; i++)
		{
			sum = sum + (id[i] - '0') * weight[i];
		}
		mode = sum % 11;
		if (validate[mode] == id[17])
		{
			return true;
		}
	}
	return false;
}

void StudentManager::Show_Teacher()
{
	CTeacher* counsellor = new Counsellor("刘皓月");
	CTeacher* teacher = new Teacher("张劲峰");
	m_TeacherArray = new CTeacher * [m_TeacherNum];
	m_TeacherArray[0] = counsellor;
	m_TeacherArray[1] = teacher;
	this->m_TeacherArray[0]->showInfo();
	this->m_TeacherArray[1]->showInfo();
	system("pause");
	system("cls");
}

void StudentManager::Add_Stu()
{
	cout << "请输入增加学生数量：" << endl;

	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//计算新空间的大小
		int newSize = this->m_StuNum + addNum;

		//开辟新空间
		CStudent** newSpace = new CStudent * [newSize];

		//将原空间下的内容存放到新空间
		if (this->m_StuArray != NULL)
		{
			for (int i = 0; i < this->m_StuNum; i++)
			{
				newSpace[i] = this->m_StuArray[i];
			}
		}

		//输入新数据
		for (int i = 0; i < addNum; i++)
		{
			string name;
			int age;
			string sex;
			string id;
			string sid;
			string atime;
			int DId;

			int option;

			cout << "请输入第 " << i + 1 << " 个学生姓名" << endl;
			cin >> name;
			cout << "请输入第 " << i + 1 << " 个学生年龄" << endl;
			cin >> age;
			cout << "请输入第 " << i + 1 << " 个学生性别" << endl;
			cin >> sex;

			cout << "请输入第 " << i + 1 << " 个学生身份证号" << endl;
			cin >> id;

			while (!Check_Sid(id))
			{
				cout << "输入错误，请重新输入身份证号：" << endl;
				cin >> id;
			}
			
			cout << "请输入第 " << i + 1 << " 个学生学号" << endl;
			cin >> sid;
			cout << "请输入第 " << i + 1 << " 个学生入学时间" << endl;
			cin >> atime;

			cout << "请选择学生身份: " << endl;
			cout << "1、班长" << endl;
			cout << "2、学习委员" << endl;
			cout << "3、团支书" << endl;
			cout << "4、普通学生" << endl;
			cin >> option;

			CStudent* stu = NULL;
			switch (option)
			{
			case 1:
				stu = new Monitor(name, age, sex, id, sid, atime, 1);
				break;
			case 2:
				stu = new StudyCommissioner(name, age, sex, id, sid, atime, 2);
				break;
			case 3:
				stu = new TuanZhishu(name, age, sex, id, sid, atime, 3);
				break;
			case 4:
				stu = new Student(name, age, sex, id, sid, atime, 4);
				break;
			default:
				break;
			}
			
			newSpace[this->m_StuNum + i] = stu;
		}
		//释放原有空间
		delete[] this->m_StuArray;

		//更改新空间的指向
		this->m_StuArray = newSpace;
		
		//更新个数
		this->m_StuNum = newSize;

		cout << "成功添加" << addNum << "名学生!" << endl;
	}
	else
	{
		cout << "输入错误" << endl;
	}
	system("pause");
	system("cls");
}

void StudentManager::Show_Stu()
{
	if (this->m_StuNum==0)
	{
		cout << "记录为空!" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_StuNum; i++)
		{
			this->m_StuArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

int StudentManager::IsExist(string sid)
{
	int index = -1;
	for (int i = 0; i < this->m_StuNum; i++)
	{
		if (this->m_StuArray[i]->m_StudentID == sid)
		{
			index = i;
			break;
		}
	}
	return index;
}

void StudentManager::Del_Stu()
{
	if (!this->m_StuNum)
	{
		cout << "记录为空!" << endl;
	}
	else
	{
		cout << "请输入想要删除的学号：" << endl;
		string id;
		cin >> id;

		int index = this->IsExist(id);
		if (index != -1)
		{
			for (int i = index; i < this->m_StuNum; i++)
			{
				this->m_StuArray[i] = this->m_StuArray[i + 1];
			}
			this->m_StuNum--;
			cout << "删除成功！" << endl;
		}
		else
		{
			cout << "删除失败，未找到该学生" << endl;
		}
	}
	system("pause");
	system("cls");
}

void StudentManager::Mod_Stu()
{
	if (!this->m_StuNum)
	{
		cout << "记录为空!" << endl;
	}
	else
	{
		cout << "请输入想要删除的学号：" << endl;
		string id;
		cin >> id;

		int index = this->IsExist(id);
		if (index != -1)
		{
			delete this->m_StuArray[index];

			string newname;
			int newage;
			string newsex;
			string newid;
			string newsid;
			string newatime;
			int newDId;

			int option;

			cout << "查到： 第" << id << "号学生，请输入新学号： " << endl;
			cin >> newsid;
			cout << "请输入新姓名: " << endl;
			cin >> newname;
			cout << "请输入新年龄: " << endl;
			cin >> newage;
			cout << "请输入新性别: " << endl;
			cin >> newsex;
			cout << "请输入新身份证号: " << endl;
			cin >> newid;
			cout << "请输入新入学时间: " << endl;
			cin >> newatime;
			cout << "请输入新身份: " << endl;

			cout << "1、班长" << endl;
			cout << "2、学习委员" << endl;
			cout << "3、团支书" << endl;
			cout << "4、普通学生" << endl;
			cin >> option;
			CStudent* stu = NULL;
			switch (option)
			{
			case 1:
				stu = new Monitor(newname, newage, newsex, newid, newsid, newatime, 1);
				break;
			case 2:
				stu = new StudyCommissioner(newname, newage, newsex, newid, newsid, newatime, 2);
			case 3:
				stu = new TuanZhishu(newname, newage, newsex, newid, newsid, newatime, 3);
			case 4:
				stu = new Student(newname, newage, newsex, newid, newsid, newatime, 4);
			default:
				break;
			}

			this->m_StuArray[index] = stu;
			cout << "修改成功！" << endl;
		}
		else
		{
			cout << "修改失败，查无此人" << endl;
		}
	}
	system("pause");
	system("cls");
}

void StudentManager::Find_Stu()
{
	if (!this->m_StuNum)
	{
		cout << "记录为空!" << endl;
	}
	else
	{
		cout << "请输入查找的方式：" << endl;
		cout << "1、按学号查找" << endl;
		cout << "2、按姓名查找" << endl;

		int select = 0;
		cin >> select;

		//按学号查找
		if (select == 1)
		{
			string id;
			cout << "请输入查找的学号：" << endl;
			cin >> id;

			int index = IsExist(id);
			if (index != -1)
			{
				cout << "查找成功！该学生信息如下：" << endl;
				this->m_StuArray[index]->showInfo();
			}
			else
			{
				cout << "查找失败，查无此人" << endl;
			}
		}
		//按姓名查找
		else if (select == 2)
		{
			string name;
			cout << "请输入查找的姓名：" << endl;
			cin >> name;

			bool flag = false;  //查找到的标志
			for (int i = 0; i < m_StuNum; i++)
			{
				if (m_StuArray[i]->m_Name == name)
				{
					cout << "查找成功,学号为："
						<< m_StuArray[i]->m_StudentID
						<< " 号的信息如下：" << endl;

					flag = true;

					this->m_StuArray[i]->showInfo();
				}
				if (flag == false)
				{
					//查无此人
					cout << "查找失败，查无此人" << endl;
				}
			}
		}
		else
		{
			cout << "输入选项有误" << endl;
		}
	}
	system("pause");
	system("cls");
}

void StudentManager::Sort_Stu()
{
	if (!this->m_StuNum)
	{
		cout << "记录为空!" << endl;
	}
	else
	{
		cout << "请选择排序方式： " << endl;
		cout << "1、按学号进行升序" << endl;
		cout << "2、按学号进行降序" << endl;

		int select = 0;
		cin >> select;

		for (int i = 0; i < m_StuNum; i++)
		{
			int minOrMax = i;
			for (int j = i + 1; j < m_StuNum; j++)
			{
				if (select == 1) //升序
				{
					if (m_StuArray[minOrMax]->m_StudentID > m_StuArray[j]->m_StudentID)
					{
						minOrMax = j;
					}
				}
				else  //降序
				{
					if (m_StuArray[minOrMax]->m_StudentID < m_StuArray[j]->m_StudentID)
					{
						minOrMax = j;
					}
				}
			}
			//判断一开始认定 最小值或最大值 是不是 计算的最小值或最大值，如果不是 交换数据
			if (i != minOrMax)
			{
				CStudent* temp = m_StuArray[i];
				m_StuArray[i] = m_StuArray[minOrMax];
				m_StuArray[minOrMax] = temp;
			}
		}
		cout << "排序成功,排序后结果为：" << endl;
		this->Show_Stu();
	}
}

void StudentManager::Clear_File()
{
	cout << "确认清空？" << endl;
	cout << "1、确认" << endl;
	cout << "2、返回" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		if (this->m_StuArray != NULL)
		{
			for (int i = 0; i < this->m_StuNum; i++)
			{
				if (this->m_StuArray[i] != NULL)
				{
					delete this->m_StuArray[i];
				}
			}
			this->m_StuNum = 0;
			delete[] this->m_StuArray;
			this->m_StuArray = NULL;
		}
		cout << "清空成功！" << endl;
	}
	system("pause");
	system("cls");
}

StudentManager::~StudentManager()
{
	if (this->m_StuArray != NULL)
	{
		delete[] this->m_StuArray;
	}
}