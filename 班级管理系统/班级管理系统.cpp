#include "StudentManager.h"
#include "Student.h"


int main()
{
	StudentManager sm;
	
	int choice = 0;
	while (true)
	{
		sm.show_Menu();

		cout << "请输入您的选择: " << endl;
		cin >> choice;

		switch (choice)
		{
		case 0://退出系统
			sm.exitSystem();
			break;
		case 1://增加学生
			sm.Add_Stu();
			break;
		case 2://显示学生
			sm.Show_Stu();
			break;
		case 3://删除学生
			sm.Del_Stu();
			break;
		case 4://修改学生
			sm.Mod_Stu();
			break;
		case 5://查找学生
			sm.Find_Stu();
			break;
		case 6://排序学生
			sm.Sort_Stu();
			break;
		case 7://清空文档
			sm.Clear_File();
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}