#include <iostream>
using namespace std;
#include <string>

void test01()
{
	string str1;
	str1 = "hello world";
	cout << str1 << endl;

	string str2;
	str2 = str1;
	cout << str2 << endl;

	string str3;
	str3.assign("hello world");
	cout << str3 << endl;

	string str4;
	str4.assign("hello world", 5);
	cout << str4 << endl;

}

int main()
{
	test01();

	system("pause");
	return 0;
}