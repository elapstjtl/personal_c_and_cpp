/*
 * @Author: your name
 * @Date: 2020-10-30 17:22:51
 * @LastEditTime: 2020-10-30 17:50:25
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\circle\Davor's_challenge.c
 */
#include<stdio.h>
#include<math.h>
#include<windows.h>
int main(void)
{
    int n,x,k,day,i,week,sum = 0;
    scanf("%d",&n);
    for (x = 100;x>=1;x--)
    {
        for (k=1;k<=100;k++)
        {
            for(week = 1;week<=52;week++)
            {
                day = x;                
                for(i = 1;i<=7;i++)
                {
                    sum += day;
                    day+=k;
                    if (sum ==n)
                    goto A;
                }
                day = x;
            }
        }
        sum = 0;
    }
    A:
printf("%d\n%d",x,k);
system("pause");
return 0;
}