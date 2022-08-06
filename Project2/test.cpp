#include <iostream>
using namespace std;
#include <string>
#define MAX 1000

//��ϵ�˽ṹ��
struct Person
{
	string Name;
	int Sex;//1 �� 2 Ů
	int Age;
	string Phone;
	string Address;
};

//���ͨѶ¼�ṹ��
struct Addressbook
{
	struct Person personArrary[MAX];//ͨѶ¼�б������ϵ������
	int Size;//ͨѶ¼�е�ǰ��ϵ�˸���
};

//�˵���ʾ����
void showMenu()
{
	cout << "************************" << endl;
	cout << "***** 1.�����ϵ�� *****" << endl;
	cout << "***** 2.��ʾ��ϵ�� *****" << endl;
	cout << "***** 3.ɾ����ϵ�� *****" << endl;
	cout << "***** 4.������ϵ�� *****" << endl;
	cout << "***** 5.�޸���ϵ�� *****" << endl;
	cout << "***** 6.�����ϵ�� *****" << endl;
	cout << "***** 0.�˳�ͨѶ¼ *****" << endl;
	cout << "************************" << endl;
}

//�����ϵ��
void addPerson(Addressbook* Ab)
{
	//�ж�ͨѶ¼�Ƿ�������������˾Ͳ������
	if (Ab->Size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else
	{
		//��Ӿ�����ϵ��
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		Ab->personArrary[Ab->Size].Name = name;

		//�Ա�
		int sex = 0;
		cout << "�������Ա�" << endl;
		cout << "����1������ ����2����Ů" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				Ab->personArrary[Ab->Size].Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}

		//����
		int age = 0;
		cout << "���������䣺" << endl;
		cin >> age;
		Ab->personArrary[Ab->Size].Age = age;

		//��ϵ�绰
		string phone;
		cout << "��������ϵ�绰��" << endl;
		cin >> phone;
		Ab->personArrary[Ab->Size].Phone = phone;

		//��ͥסַ
		string address;
		cout << "�������ͥסַ��" << endl;
		cin >> address;
		Ab->personArrary[Ab->Size].Address = address;
	
		//����ͨѶ¼����
		Ab->Size++;

		cout << "��ӳɹ�" << endl;

		system("pause");//�밴���������
		system("cls");//����
	}
}

//��ʾ��ϵ��
void showPerson(Addressbook* Ab)
{
	//�ж�ͨѶ¼�Ƿ�Ϊ��
	if (Ab->Size == 0)
	{
		cout << "��ǰͨѶ¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < Ab->Size; i++)
		{
			cout << "������" << Ab->personArrary[i].Name << "\t";
			cout << "�Ա�" << (Ab->personArrary[i].Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << Ab->personArrary[i].Age << "\t";
			cout << "�绰��" << Ab->personArrary[i].Phone << "\t";
			cout << "סַ��" << Ab->personArrary[i].Address << endl;
		}
	}
	system("pause");
	system("cls");
}

//�ж���ϵ���Ƿ����
int isExist(Addressbook* Ab, string name)
{
	for (int i = 0; i < Ab->Size; i++)
	{
		if (name == Ab->personArrary[i].Name)
		{
			return i;
		}
	}
	return -1;
}

//ɾ����ϵ��
void deletePerson(Addressbook* Ab)
{
	string name;
	cout << "������������" << endl;
	cin >> name;

	int ret = isExist(Ab, name);
	if (ret != -1)
	{
		for (int i = ret; i < Ab->Size; i++)
		{
			Ab->personArrary[i] = Ab->personArrary[i + 1];
		}
		Ab->Size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
}

//������ϵ��
void findPerson(Addressbook* Ab)
{
	cout << "������������" << endl;
	string name;
	cin >> name;
	
	int ret = isExist(Ab, name);
	if (ret != -1)
	{
		cout << "������" << Ab->personArrary[ret].Name << "\t";
		cout << "�Ա�" << Ab->personArrary[ret].Sex << "\t";
		cout << "���䣺" << Ab->personArrary[ret].Age << "\t";
		cout << "�绰��" << Ab->personArrary[ret].Phone << "\t";
		cout << "סַ��" << Ab->personArrary[ret].Address << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}

//�޸���ϵ��
void modifyPerson(Addressbook* Ab)
{
	cout << "��������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	int ret = isExist(Ab, name);
	if (ret != -1)
	{
		string name;
		cout << "����������������" << endl;
		cin >> name;
		Ab->personArrary[ret].Name = name;

		int sex = 0;
		cout << "�����������Ա�" << endl;
		cout << "����1������ ����2����Ů" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				Ab->personArrary[ret].Sex = sex;
				break;
			}
			cout << "�������� ����������" << endl;
		}

		int age;
		cout << "�������������䣺" << endl;
		cin >> age;
		Ab->personArrary[ret].Age = age;

		string phone;
		cout << "����������绰��" << endl;
		cin >> phone;
		Ab->personArrary[ret].Phone = phone;

		string address;
		cout << "�����������ַ��" << endl;
		cin >> address;
		Ab->personArrary[ret].Address = address;

		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}

//���ͨѶ¼
void clearPerson(Addressbook* Ab)
{
	Ab->Size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}

int main()
{
	struct Addressbook Ab;//����ͨѶ¼�ṹ�����
	Ab.Size = 0;//��ʼ��ͨѶ¼��ǰ����

	int select = 0;//�����û�ѡ������ı���

	while (true)
	{
		showMenu();//���ò˵���ʾ����

		cin >> select;
		switch (select)
		{
		//�����ϵ��
		case 1:
			addPerson(&Ab);
			break;
		//��ʾ��ϵ��
		case 2:
			showPerson(&Ab);
			break;
		//ɾ����ϵ��
		case 3:
			deletePerson(&Ab);
			break;
		//������ϵ��
		case 4:
			findPerson(&Ab);
			break;
		//�޸���ϵ��
		case 5:
			modifyPerson(&Ab);
			break;
		//�����ϵ��
		case 6:
			clearPerson(&Ab);
			break;
	    //�˳�ͨѶ¼
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}