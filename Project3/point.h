#pragma once
#include <iostream>
using namespace std;

//����
class Point
{
public:
	//���ú�����
	void setAbscissa(int abscissa);
	
	//��ȡ������
	int getAbscissa();
	
	//����������
	void setOrdinate(int ordinate);
	
	//��ȡ������
	int getOrdinate();


private:
	int Abscissa;//������
	int Ordinate;//������
};