#pragma once
#include <iostream>
using namespace std;
#include "point.h"

class Circle
{
public:
	//设置半径
	void setRadius(int r);
	
	//获取半径
	int getRadius();
	
	//设置圆心
	void setCenter(Point center);
	
	//获取圆心
	Point getCenter();
	

private:
	int Radius;
	Point Center;
};