/*
 * @Author: your name
 * @Date: 2020-12-03 09:49:07
 * @LastEditTime: 2020-12-03 19:36:26
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
int m,i;
cin >> m;
int a[m];
for (i = 0;i<m;i++)
{
    cin >>a[i];
    s.insert(a[i]);
}
cout << s.size() << endl;
for (set<int>::iterator it = s.begin(); it != s.end(); ++it) //迭代器输出
{
    cout << *it << " ";
}

system("pause");
return 0;
}