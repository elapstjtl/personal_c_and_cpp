/*
 * @Author: your name
 * @Date: 2020-12-17 11:07:28
 * @LastEditTime: 2020-12-17 12:03:57
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\cpp\base\object\practice\Circle.cpp
 */
#include "Circle.h"
#include <math.h>

void Circle::setXYR(double _x,double _y,double _r)
{
    x = _x; y = _y;r = _r;
}

double Circle::getX(double x)
{
    return x;
}
double Circle::getY(double y)
{
    return y;
}
double Circle::getR(double r)
{
    return r;
}
void Circle::copyXYR(double _x, double _y,double _r)
{
    _x = x;_y = y;_r = r;
}