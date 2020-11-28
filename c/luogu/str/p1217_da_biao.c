/*
 * @Author: your name
 * @Date: 2020-10-28 14:22:01
 * @LastEditTime: 2020-10-28 14:58:34
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\da_biao\da_biao.c
 */
#include<stdio.h>
#include<windows.h>
#include<math.h>
int huiwen(int i); // 输入一个数，判断是否为回文数，是返回1，不是返回0
int prime(int i); // 输入一个数，判断是否为素数，是返回1，不是返回0
int main(void)
{
	int i;
	for(i = 5;i<=100000000;i++)
	{
		if (huiwen(i) && prime(i))
		{
			printf("%d,",i);
		}
	}
system("pause");
return 0;
}

int huiwen (int num)
{
	int s,y=0;
	s=num;
	while(s>0)
    {
		y=y*10+s%10;
		s=s/10;
	}
	if(y==num)
    {
		return 1;
	}
    else
    {
        return 0;
	}
}

int prime(int  p )
{
    if (p<=1)
    {
        return 0;
    }
    int i;
    double temp;
    temp = sqrt(p);
    for (i=2;i<temp;i++)
    {
        if (p%i == 0)
        {
            return 0;
        }
    } 
    return 1;
} 