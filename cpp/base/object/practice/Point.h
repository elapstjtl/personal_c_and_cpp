/*
 * @Author: your name
 * @Date: 2020-12-17 10:30:23
 * @LastEditTime: 2020-12-17 16:07:30
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\cpp\base\object\practice\Point.h
 */
#ifndef _TEST_H_
#define _TEST_H_
class Point
{
public:
    void getXY(double _x,double _y);
    double getdist(Point &p1);
    void getX(double _x);
    void getY(double _y);
private:
    double x;
    double y;
};
#endif