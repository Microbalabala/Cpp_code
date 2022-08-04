//#include <iostream>
//#include <string.h>
//using namespace std;
//
//int main()
//{
	/*int month = 12;
	cout << "month is " << month << endl;*/

	//转义字符\t
	/*cout << "aaaa\thello" << endl;
	cout << "aaaaaaaa\thello" << endl;
	cout << "aaaaaaaaa\thello" << endl;*/

	//浮点型
	/*float f1 = 2.1f;
	cin >> f1;
	cout << f1 << endl;*/

	//字符串型
	/*string str = "abcd";
	cin >> str;
	cout << str << endl;*/

//	system("pause");
//	return 0;
//}


#include <iostream>
using namespace std;
#include <string>
#include <ctime>

//结构体案例1
//struct Student
//{
//	string sName;
//	int score;
//};
//
//struct Teacher
//{
//	string tName;
//	struct Student sArray[5];
//};
//
//void allocateSpace(struct Teacher tArray[], int len)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < len; i++)
//	{
//		tArray[i].tName = "Teacher_";
//		tArray[i].tName += nameSeed[i];
//		for (int j = 0; j < 5; j++)
//		{
//			int random = rand() % 100 + 1;
//			tArray[i].sArray[j].sName = "Student_";
//			tArray[i].sArray[j].sName += nameSeed[j];
//			tArray[i].sArray[j].score = random;
//		}
//	}
//}
//
//void printfInfo(struct Teacher tArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << tArray[i].tName << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << tArray[i].sArray[j].sName << tArray[i].sArray[j].score << endl;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//
//	struct Teacher tArray[3];
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	allocateSpace(tArray, len);
//	printfInfo(tArray, len);
//
//	system("pause");
//	return 0;
//}


//结构体案例2
struct Hero
{
	string name;
	int age;
	string sex;
};

void bubble_sort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero tmp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = tmp;
			}
		}
	}
}

void printfInfo(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << heroArray[i].name << heroArray[i].age << heroArray[i].sex << endl;
	}
}

int main()
{
	struct Hero heroArray[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	bubble_sort(heroArray, len);
	printfInfo(heroArray, len);

	system("pause");
	return 0;
}