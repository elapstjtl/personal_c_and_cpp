/*
 * @Author: your name
 * @Date: 2020-12-03 10:30:24
 * @LastEditTime: 2020-12-03 10:30:42
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\cpp\cpp\oj\test.cpp
 */
#include<bits/stdc++.h>
using namespace std;
set<int>s;
int a[105];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s.insert(a[i]);
	}
	cout<<s.size()<<endl;
	while(!s.empty())
	{
		cout<<*s.begin()<<" ";           //注意此处的用法
		s.erase(s.begin());	
	}
    system("pause");
	return 0;
 }