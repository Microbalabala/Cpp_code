#include "StudentManager.h"
#include "Student.h"


int main()
{
	StudentManager sm;
	
	int choice = 0;
	while (true)
	{
		sm.show_Menu();

		cout << "����������ѡ��: " << endl;
		cin >> choice;

		switch (choice)
		{
		case 0://�˳�ϵͳ
			sm.exitSystem();
			break;
		case 1://����ѧ��
			sm.Add_Stu();
			break;
		case 2://��ʾѧ��
			sm.Show_Stu();
			break;
		case 3://ɾ��ѧ��
			sm.Del_Stu();
			break;
		case 4://�޸�ѧ��
			sm.Mod_Stu();
			break;
		case 5://����ѧ��
			sm.Find_Stu();
			break;
		case 6://����ѧ��
			sm.Sort_Stu();
			break;
		case 7://����ĵ�
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