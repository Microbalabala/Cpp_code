#include "StudentManager.h"


StudentManager::StudentManager()
{
	//��ʼ������
	this->m_StuNum = 0;
	//��ʼ������ָ��
	this->m_StuArray = NULL;

	this->m_TeacherNum = 2;

	this->m_TeacherArray = NULL;
}

void StudentManager::show_Menu()
{
	cout << "**************************************" << endl;
	cout << "******* ��ӭʹ�ð༶����ϵͳ�� *******" << endl;
	cout << "*********** 0.�˳�����ϵͳ ***********" << endl;
	cout << "*********** 1.����ѧ����Ϣ ***********" << endl;
	cout << "*********** 2.��ʾѧ����Ϣ ***********" << endl;
	cout << "*********** 3.ɾ����Уѧ�� ***********" << endl;
	cout << "*********** 4.�޸�ѧ����Ϣ ***********" << endl;
	cout << "*********** 5.����ѧ����Ϣ ***********" << endl;
	cout << "*********** 6.����ѧ������ ***********" << endl;
	cout << "*********** 7.��������ĵ� ***********" << endl;
	cout << "*********** 8.��ʾ��ʦ��Ϣ ***********" << endl;
	cout << "**************************************" << endl;
	cout << endl;
}

void StudentManager::exitSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
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
	CTeacher* counsellor = new Counsellor("�����");
	CTeacher* teacher = new Teacher("�ž���");
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
	cout << "����������ѧ��������" << endl;

	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//�����¿ռ�Ĵ�С
		int newSize = this->m_StuNum + addNum;

		//�����¿ռ�
		CStudent** newSpace = new CStudent * [newSize];

		//��ԭ�ռ��µ����ݴ�ŵ��¿ռ�
		if (this->m_StuArray != NULL)
		{
			for (int i = 0; i < this->m_StuNum; i++)
			{
				newSpace[i] = this->m_StuArray[i];
			}
		}

		//����������
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

			cout << "������� " << i + 1 << " ��ѧ������" << endl;
			cin >> name;
			cout << "������� " << i + 1 << " ��ѧ������" << endl;
			cin >> age;
			cout << "������� " << i + 1 << " ��ѧ���Ա�" << endl;
			cin >> sex;

			cout << "������� " << i + 1 << " ��ѧ�����֤��" << endl;
			cin >> id;

			while (!Check_Sid(id))
			{
				cout << "��������������������֤�ţ�" << endl;
				cin >> id;
			}
			
			cout << "������� " << i + 1 << " ��ѧ��ѧ��" << endl;
			cin >> sid;
			cout << "������� " << i + 1 << " ��ѧ����ѧʱ��" << endl;
			cin >> atime;

			cout << "��ѡ��ѧ�����: " << endl;
			cout << "1���೤" << endl;
			cout << "2��ѧϰίԱ" << endl;
			cout << "3����֧��" << endl;
			cout << "4����ͨѧ��" << endl;
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
		//�ͷ�ԭ�пռ�
		delete[] this->m_StuArray;

		//�����¿ռ��ָ��
		this->m_StuArray = newSpace;
		
		//���¸���
		this->m_StuNum = newSize;

		cout << "�ɹ����" << addNum << "��ѧ��!" << endl;
	}
	else
	{
		cout << "�������" << endl;
	}
	system("pause");
	system("cls");
}

void StudentManager::Show_Stu()
{
	if (this->m_StuNum==0)
	{
		cout << "��¼Ϊ��!" << endl;
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
		cout << "��¼Ϊ��!" << endl;
	}
	else
	{
		cout << "��������Ҫɾ����ѧ�ţ�" << endl;
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
			cout << "ɾ���ɹ���" << endl;
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ѧ��" << endl;
		}
	}
	system("pause");
	system("cls");
}

void StudentManager::Mod_Stu()
{
	if (!this->m_StuNum)
	{
		cout << "��¼Ϊ��!" << endl;
	}
	else
	{
		cout << "��������Ҫɾ����ѧ�ţ�" << endl;
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

			cout << "�鵽�� ��" << id << "��ѧ������������ѧ�ţ� " << endl;
			cin >> newsid;
			cout << "������������: " << endl;
			cin >> newname;
			cout << "������������: " << endl;
			cin >> newage;
			cout << "���������Ա�: " << endl;
			cin >> newsex;
			cout << "�����������֤��: " << endl;
			cin >> newid;
			cout << "����������ѧʱ��: " << endl;
			cin >> newatime;
			cout << "�����������: " << endl;

			cout << "1���೤" << endl;
			cout << "2��ѧϰίԱ" << endl;
			cout << "3����֧��" << endl;
			cout << "4����ͨѧ��" << endl;
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
			cout << "�޸ĳɹ���" << endl;
		}
		else
		{
			cout << "�޸�ʧ�ܣ����޴���" << endl;
		}
	}
	system("pause");
	system("cls");
}

void StudentManager::Find_Stu()
{
	if (!this->m_StuNum)
	{
		cout << "��¼Ϊ��!" << endl;
	}
	else
	{
		cout << "��������ҵķ�ʽ��" << endl;
		cout << "1����ѧ�Ų���" << endl;
		cout << "2������������" << endl;

		int select = 0;
		cin >> select;

		//��ѧ�Ų���
		if (select == 1)
		{
			string id;
			cout << "��������ҵ�ѧ�ţ�" << endl;
			cin >> id;

			int index = IsExist(id);
			if (index != -1)
			{
				cout << "���ҳɹ�����ѧ����Ϣ���£�" << endl;
				this->m_StuArray[index]->showInfo();
			}
			else
			{
				cout << "����ʧ�ܣ����޴���" << endl;
			}
		}
		//����������
		else if (select == 2)
		{
			string name;
			cout << "��������ҵ�������" << endl;
			cin >> name;

			bool flag = false;  //���ҵ��ı�־
			for (int i = 0; i < m_StuNum; i++)
			{
				if (m_StuArray[i]->m_Name == name)
				{
					cout << "���ҳɹ�,ѧ��Ϊ��"
						<< m_StuArray[i]->m_StudentID
						<< " �ŵ���Ϣ���£�" << endl;

					flag = true;

					this->m_StuArray[i]->showInfo();
				}
				if (flag == false)
				{
					//���޴���
					cout << "����ʧ�ܣ����޴���" << endl;
				}
			}
		}
		else
		{
			cout << "����ѡ������" << endl;
		}
	}
	system("pause");
	system("cls");
}

void StudentManager::Sort_Stu()
{
	if (!this->m_StuNum)
	{
		cout << "��¼Ϊ��!" << endl;
	}
	else
	{
		cout << "��ѡ������ʽ�� " << endl;
		cout << "1����ѧ�Ž�������" << endl;
		cout << "2����ѧ�Ž��н���" << endl;

		int select = 0;
		cin >> select;

		for (int i = 0; i < m_StuNum; i++)
		{
			int minOrMax = i;
			for (int j = i + 1; j < m_StuNum; j++)
			{
				if (select == 1) //����
				{
					if (m_StuArray[minOrMax]->m_StudentID > m_StuArray[j]->m_StudentID)
					{
						minOrMax = j;
					}
				}
				else  //����
				{
					if (m_StuArray[minOrMax]->m_StudentID < m_StuArray[j]->m_StudentID)
					{
						minOrMax = j;
					}
				}
			}
			//�ж�һ��ʼ�϶� ��Сֵ�����ֵ �ǲ��� �������Сֵ�����ֵ��������� ��������
			if (i != minOrMax)
			{
				CStudent* temp = m_StuArray[i];
				m_StuArray[i] = m_StuArray[minOrMax];
				m_StuArray[minOrMax] = temp;
			}
		}
		cout << "����ɹ�,�������Ϊ��" << endl;
		this->Show_Stu();
	}
}

void StudentManager::Clear_File()
{
	cout << "ȷ����գ�" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2������" << endl;

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
		cout << "��ճɹ���" << endl;
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