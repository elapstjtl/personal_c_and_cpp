/*
 * @Author: your name
 * @Date: 2020-12-14 22:14:48
 * @LastEditTime: 2020-12-17 10:23:53
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
    int a[10] = {12,23,4,5,214,34,23,64,124,346};
    _sort b;
    b.int_quick_sort(a,10);
    for (int i = 0; i <10;i++)
        cout << a[i] <<endl;
    system("pause");
    return 0;
}