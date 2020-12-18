/*
 * @Author: your name
 * @Date: 2020-12-17 10:59:04
 * @LastEditTime: 2020-12-18 18:45:39
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\cpp\base\object\practice\circle.h
 */
#ifndef _MAP_H_
#define _MAP_H_
class Circle
{
public:
double cpx,cpy,cpr; //用于传递private的参数
    void getR(double _r);
    void getX(double _x);
    void getY(double _Y);
    void setXYR(double _x, double _y, double _r);
    void copy();
private:
    double x,y,r;
};
#endif