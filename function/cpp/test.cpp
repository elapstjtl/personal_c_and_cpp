/*
 * @Author: your name
 * @Date: 2020-12-14 22:14:48
 * @LastEditTime: 2020-12-22 19:49:19
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\function\cpp\test.cpp
 */
#include <iostream>
using namespace std;
#include"_sort.h"
#include"_sort.cpp"
int main()
{
    double a[10] = {1.2,23,4,5,2.14,34,23,6.4,12.4,346};
    _sort b;
    b.qsort(a,10);
    for (int i = 0; i <10;i++)
        cout << a[i] <<endl;
system("pause");
return 0;
}