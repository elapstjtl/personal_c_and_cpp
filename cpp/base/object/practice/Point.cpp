/*
 * @Author: your name
 * @Date: 2020-12-17 10:35:49
 * @LastEditTime: 2020-12-17 16:08:04
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\cpp\base\object\practice\Point.cpp
 */

#include"Point.h"
#include<math.h>
void Point::getXY(double _x,double _y)
{
    x = _x; y = _y;
}

void Point::getX(double _x)
{
    x = _x;
}
void Point::getY(double _y)
{
    y = _y;
}
double Point::getdist(Point &p1)
{
    double d;
    d = (p1.x - x) * (p1.x - x) + (p1.y - y) * (p1.y - y);

	return sqrt(d);
}
