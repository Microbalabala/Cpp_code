#include <iostream>
using namespace std;
#include <string>
#define MAX 1000

//联系人结构体
struct Person
{
	string Name;
	int Sex;//1 男 2 女
	int Age;
	string Phone;
	string Address;
};

//设计通讯录结构体
struct Addressbook
{
	struct Person personArrary[MAX];//通讯录中保存的联系人数组
	int Size;//通讯录中当前联系人个数
};

//菜单显示函数
void showMenu()
{
	cout << "************************" << endl;
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 6.清空联系人 *****" << endl;
	cout << "***** 0.退出通讯录 *****" << endl;
	cout << "************************" << endl;
}

//添加联系人
void addPerson(Addressbook* Ab)
{
	//判断通讯录是否已满，如果满了就不能添加
	if (Ab->Size == MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else
	{
		//添加具体联系人
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		Ab->personArrary[Ab->Size].Name = name;

		//性别
		int sex = 0;
		cout << "请输入性别：" << endl;
		cout << "数字1代表男 数字2代表女" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				Ab->personArrary[Ab->Size].Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}

		//年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
		cin >> age;
		Ab->personArrary[Ab->Size].Age = age;

		//联系电话
		string phone;
		cout << "请输入联系电话：" << endl;
		cin >> phone;
		Ab->personArrary[Ab->Size].Phone = phone;

		//家庭住址
		string address;
		cout << "请输入家庭住址：" << endl;
		cin >> address;
		Ab->personArrary[Ab->Size].Address = address;
	
		//更新通讯录人数
		Ab->Size++;

		cout << "添加成功" << endl;

		system("pause");//请按任意键继续
		system("cls");//清屏
	}
}

//显示联系人
void showPerson(Addressbook* Ab)
{
	//判断通讯录是否为空
	if (Ab->Size == 0)
	{
		cout << "当前通讯录为空" << endl;
	}
	else
	{
		for (int i = 0; i < Ab->Size; i++)
		{
			cout << "姓名：" << Ab->personArrary[i].Name << "\t";
			cout << "性别：" << (Ab->personArrary[i].Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << Ab->personArrary[i].Age << "\t";
			cout << "电话：" << Ab->personArrary[i].Phone << "\t";
			cout << "住址：" << Ab->personArrary[i].Address << endl;
		}
	}
	system("pause");
	system("cls");
}

//判断联系人是否存在
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

//删除联系人
void deletePerson(Addressbook* Ab)
{
	string name;
	cout << "请输入姓名：" << endl;
	cin >> name;

	int ret = isExist(Ab, name);
	if (ret != -1)
	{
		for (int i = ret; i < Ab->Size; i++)
		{
			Ab->personArrary[i] = Ab->personArrary[i + 1];
		}
		Ab->Size--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
}

//查找联系人
void findPerson(Addressbook* Ab)
{
	cout << "请输入姓名：" << endl;
	string name;
	cin >> name;
	
	int ret = isExist(Ab, name);
	if (ret != -1)
	{
		cout << "姓名：" << Ab->personArrary[ret].Name << "\t";
		cout << "性别：" << Ab->personArrary[ret].Sex << "\t";
		cout << "年龄：" << Ab->personArrary[ret].Age << "\t";
		cout << "电话：" << Ab->personArrary[ret].Phone << "\t";
		cout << "住址：" << Ab->personArrary[ret].Address << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}

//修改联系人
void modifyPerson(Addressbook* Ab)
{
	cout << "请输入您要修改的联系人：" << endl;
	string name;
	cin >> name;

	int ret = isExist(Ab, name);
	if (ret != -1)
	{
		string name;
		cout << "请重新输入姓名：" << endl;
		cin >> name;
		Ab->personArrary[ret].Name = name;

		int sex = 0;
		cout << "请重新输入性别：" << endl;
		cout << "数字1代表男 数字2代表女" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				Ab->personArrary[ret].Sex = sex;
				break;
			}
			cout << "输入有误 请重新输入" << endl;
		}

		int age;
		cout << "请重新输入年龄：" << endl;
		cin >> age;
		Ab->personArrary[ret].Age = age;

		string phone;
		cout << "请重新输入电话：" << endl;
		cin >> phone;
		Ab->personArrary[ret].Phone = phone;

		string address;
		cout << "请重新输入地址：" << endl;
		cin >> address;
		Ab->personArrary[ret].Address = address;

		cout << "修改成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}

//清空通讯录
void clearPerson(Addressbook* Ab)
{
	Ab->Size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}

int main()
{
	struct Addressbook Ab;//创建通讯录结构体变量
	Ab.Size = 0;//初始化通讯录当前人数

	int select = 0;//创建用户选择输入的变量

	while (true)
	{
		showMenu();//调用菜单显示函数

		cin >> select;
		switch (select)
		{
		//添加联系人
		case 1:
			addPerson(&Ab);
			break;
		//显示联系人
		case 2:
			showPerson(&Ab);
			break;
		//删除联系人
		case 3:
			deletePerson(&Ab);
			break;
		//查找联系人
		case 4:
			findPerson(&Ab);
			break;
		//修改联系人
		case 5:
			modifyPerson(&Ab);
			break;
		//清空联系人
		case 6:
			clearPerson(&Ab);
			break;
	    //退出通讯录
		case 0:
			cout << "欢迎下次使用" << endl;
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