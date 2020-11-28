/*
 * @Author: your name
 * @Date: 2020-10-05 14:38:33
 * @LastEditTime: 2020-10-26 09:36:25
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\pta\main.c
 */
#include<stdio.h>
#include<math.h>
#include<windows.h>
int prime(int num);
int main()
{	int count=0,m,i;
	scanf("%d",&m);
	for (i = m-1;i>1;i--)
	{
		if (prime(i))
		{
			printf("%6d",i);
			count++;
		}
		if (count > 9)
		break;
	}
system("pause");
return 0;		
} 

int prime(int num)
{
	int i;
	for (i = 2;i<num;i++)
	{
		if(num%i==0)
		return 0;
	}
	return num;
}
