/*
 * @Author: your name
 * @Date: 2020-12-17 10:59:04
 * @LastEditTime: 2020-12-17 11:57:10
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\cpp\base\object\practice\circle.h
 */
#ifndef _MAP_H_
#define _MAP_H_
class Circle
{
public:
double _x,_y,_r;
    double getR(double r);
    double getX(double x);
    double getY(double Y);
    void setXYR(double _x, double _y, double _r);
    void copyXYR(double x, double y,double r);
private:
    double x,y,r;
};
#endif