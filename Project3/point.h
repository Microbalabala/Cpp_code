#pragma once
#include <iostream>
using namespace std;

//点类
class Point
{
public:
	//设置横坐标
	void setAbscissa(int abscissa);
	
	//获取横坐标
	int getAbscissa();
	
	//设置纵坐标
	void setOrdinate(int ordinate);
	
	//获取纵坐标
	int getOrdinate();


private:
	int Abscissa;//横坐标
	int Ordinate;//纵坐标
};