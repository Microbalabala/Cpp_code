#include "point.h"


//设置横坐标
void Point::setAbscissa(int abscissa)
{
	Abscissa = abscissa;
}
//获取横坐标
int Point::getAbscissa()
{
	return Abscissa;
}
//设置纵坐标
void Point::setOrdinate(int ordinate)
{
	Ordinate = ordinate;
}
//获取纵坐标
int Point::getOrdinate()
{
	return Ordinate;
}