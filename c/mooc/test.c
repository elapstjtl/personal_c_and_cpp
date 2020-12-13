/*
 * @Author: your name
 * @Date: 2020-12-12 21:45:18
 * @LastEditTime: 2020-12-12 21:45:19
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\c\mooc\test.c
 */
#include <iostream>
#include<string>

using namespace std;
//本题要求编写程序，使用指针方式实现两个字符串的连接(不能使用strcat函数），并将连接后的字符串输出。

int main()
{
	char str[200], * p1, * q1;
	cin >> str;
	p1 = q1 = str;
	for (; *p1 != '\0' ; p1++)
		if (*p1 != 'a') * q1++ = *p1;
	*q1 = *p1;
	cout << str << endl;
	return 0;
}
