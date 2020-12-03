/*
 * @Author: your name
 * @Date: 2020-12-03 09:49:07
 * @LastEditTime: 2020-12-03 12:03:04
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\cpp\cpp\oj\p1059.cpp
 */
#include <iostream>
#include <set>
using namespace std;
set<int>s;
int main(void)
{
int n,i;
cin >> n;
int Chinese[n],math[n],english[n];
int sum[n],flag[n];
for (i = 0;i<n;i++)
{
    cin >>Chinese[i] >> math[i]>> english[i];
    sum[i] = Chinese[i] + math[i] + english[i];
}



system("pause");
return 0;
}