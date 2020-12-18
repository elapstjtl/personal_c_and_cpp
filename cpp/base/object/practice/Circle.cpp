/*
 * @Author: your name
 * @Date: 2020-12-17 11:07:28
 * @LastEditTime: 2020-12-17 16:12:57
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

void Circle::getX(double _x)
{
    x = _x;
}
void Circle::getY(double _y)
{
    y = _y;
}
void Circle::getR(double _r)
{
    r = _r;
}
void Circle::copy()
{
    cpy = y;cpx = x; cpr = r;
}