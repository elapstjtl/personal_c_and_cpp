/*
 * @Author: your name
 * @Date: 2020-10-25 16:13:52
 * @LastEditTime: 2020-11-15 10:24:19
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit1
 * @FilePath: \c\luogu\circle\averange_classic.c
 */
#include<stdio.h>
#include<windows.h>

int main(void)
{
    int n,k,i;
    double count1=0,count2=0;
    double sum1 = 0,sum2=0;
    scanf("%d %d",&n,&k);
    for (i = 1;i<=n;i++)
    {
        if (i%k == 0)
        {
            sum1 = sum1+i;
            count1++;
        }
        else
        {
            sum2 = sum2 +i;
            count2++;
        }
    }
    sum1 = sum1 / count1;
    sum2 = sum2 / count2;
    printf("%.1lf %.1lf",sum1,sum2);
    system("pause");
}