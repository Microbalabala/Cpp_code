#pragma once
#include <iostream>
using namespace std;
#include "point.h"

class Circle
{
public:
	//���ð뾶
	void setRadius(int r);
	
	//��ȡ�뾶
	int getRadius();
	
	//����Բ��
	void setCenter(Point center);
	
	//��ȡԲ��
	Point getCenter();
	

private:
	int Radius;
	Point Center;
};