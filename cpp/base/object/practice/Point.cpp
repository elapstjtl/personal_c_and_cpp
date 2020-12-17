/*
 * @Author: your name
 * @Date: 2020-12-17 10:35:49
 * @LastEditTime: 2020-12-17 11:32:06
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

double Point::getX(double x)
{
    return x;
}
double Point::getY(double Y)
{
    return y;
}
double Point::getdist(Point &p1)
{
    double d;
    d = (p1.x - x) * (p1.x - x) + (p1.y - y) * (p1.y - y);

	return sqrt(d);
}
