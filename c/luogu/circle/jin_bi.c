/*
 * @Author: your name
 * @Date: 2020-10-27 18:19:31
 * @LastEditTime: 2020-10-27 18:30:34
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \luogu\circle\jin_bi.c
 */
#include<stdio.h>
#include<windows.h>
int main(void)
{
    int day = 1,pay = 0,sum = 0,i,totalday = 0,n = 1;
    scanf("%d",&day);
    while (1)
    {
        pay++;
        for (i=1;i<=n;i++)
        {
            sum+=pay;
            totalday++;
            if(totalday>=day)
            {
                goto A;
            }
        }
        n++;
    }
    
A:printf("%d",sum);
system("pause");
return 0;
}