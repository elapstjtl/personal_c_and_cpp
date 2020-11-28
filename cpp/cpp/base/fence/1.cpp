/*
 * @Author: your name
 * @Date: 2020-11-25 19:47:29
 * @LastEditTime: 2020-11-26 10:24:15
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\cpp\cpp\base\fence\1.cpp
 */
#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int i;
    for (i = 0;i<10;i++)
    {
        cin >> a[i];
    }
    for (i = 0;i<10;i++)
    {
        cout << a[i] << ' '<<endl;
    }
system("pause");
return 0;
}