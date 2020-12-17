/*
 * @Author: your name
 * @Date: 2020-12-17 10:50:28
 * @LastEditTime: 2020-12-17 12:05:05
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\cpp\base\object\practice\main.cpp
 */
#include "Point.h"
#include "Point.cpp"
#include "Circle.h"
#include "Circle.cpp"
#include<iostream>
using namespace std;
int main(void)
{
    Circle c1,c2;
    Point p1,p2;
    double x,y,r,distance;
    double x1,x2,y1,y2,r1,r2;
    cout << "请依次输入第一个圆的横坐标，纵坐标，半径" << endl;
    cin >> x >> y >> r;
    c1.getX(x);
    c1.getY(y);
    c1.getR(r);
    p1.getX(x);
    p1.getY(y);
    cout << "请依次输入第二个圆的横坐标，纵坐标，半径" <<endl;
    cin >> x >> y >> r;
    c2.getX(x);
    c2.getY(y);
    c2.getR(r);
    p2.getX(x);
    p2.getY(y);
    
    distance = p1.getdist(p2);

    c1.copyXYR(x1,y1,r1);

    c2.copyXYR(x2,y2,r2);

    
    
    if (r1 + r2 > distance)
        cout << "相交";
    if (r1 + r2 == distance)
        cout << "相切";
    if (r1 + r2 < distance)
        cout <<"相离";
system("pause");
return 0;
    
    
    
}