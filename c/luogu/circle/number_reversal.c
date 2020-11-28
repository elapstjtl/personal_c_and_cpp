/*
 * @Author: your name
 * @Date: 2020-10-28 18:16:43
 * @LastEditTime: 2020-10-28 18:26:37
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\circle\number_reversal.c
 */
#include<stdio.h>
#include<windows.h>
int main (void)
{
	int s,y=0,num;
    scanf("%d",&num);
	s=num;
    if (s>0)
    {
        while(s>0)
        {
            y=y*10+s%10;
            s=s/10;
        }
    }
    else
    {
        s = abs(s);
        while(s>0)
        {
            y=y*10+s%10;
            s=s/10;
        }
        y = y*(-1);
    }
    
printf("%d",y);
system("pause");
return 0;
}