#include "circle.h"


//设置半径
void Circle::setRadius(int r)
{
	Radius = r;
}
//获取半径
int Circle::getRadius()
{
	return Radius;
}
//设置圆心
void Circle::setCenter(Point center)
{
	Center = center;
}
//获取圆心
Point Circle::getCenter()
{
	return Center;
}