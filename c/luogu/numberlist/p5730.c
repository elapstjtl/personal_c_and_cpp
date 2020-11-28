/*
 * @Author: your name
 * @Date: 2020-11-04 20:52:36
 * @LastEditTime: 2020-11-04 21:03:20
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\numberlist\p5730.c
 * 这个真的要讲嘛，好水啊
 */
#include<windows.h>
#include<stdio.h>
#include<string.h>

char s[5][55] = //包含所有的一个超长二维字符串，用于打印
{
	"XXX...X.XXX.XXX.X.X.XXX.XXX.XXX.XXX.XXX.",
	"X.X...X...X...X.X.X.X...X.....X.X.X.X.X.",
	"X.X...X.XXX.XXX.XXX.XXX.XXX...X.XXX.XXX.",
	"X.X...X.X.....X...X...X.X.X...X.X.X...X.",
	"XXX...X.XXX.XXX...X.XXX.XXX...X.XXX.XXX.",
};

int main()
{
	int n;
	int len, i, x;
	int j, k;
	char str[110];
	scanf("%d", &n);
	scanf("%s", str, 110);
	len = strlen(str);
	for (j = 0; j < 5; ++j)
	{
		for (i = 0; i < len - 1; ++i)//打印一行
		{
			x = str[i] - '0'; //ASCII转化为int
			for (k = 4 * x; k <= 4 * x + 3; ++k)  //打印
				printf("%c", s[j][k]);
		}
		x = str[i] - '0';//继续打印
		for (k = 4 * x; k <= 4 * x + 2; ++k)
			printf("%c", s[j][k]);
		printf("\n"); //换行
	}
system("pause");
return 0;
}