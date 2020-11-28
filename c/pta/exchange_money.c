/*
 * @Author: your name
 * @Date: 2020-10-26 09:06:13
 * @LastEditTime: 2020-10-26 09:53:54
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\pta\exchange_money.c
 */
# include <stdio.h>
# include <stdlib.h>
#include<windows.h>
#include<math.h>
int main(void)
{
    int count =0,n1=0,n2=0,n3=0,n;
    scanf("%d",&n);
    int sum = 150;
    for (n1=1;n1<=100;n1++)
    {
        for (n2=50;n2<=100;n2--)
        {
            for (n3=1;n3<=100;n3++)
            {
                if (n1*5+n2*2+n3 == 150 && count<n && n1 && n2 && n3)
                {
                    count++;
                    printf("%d %d %d\n",n1,n2,n3);
                }
            }
        }
    }

system("pause");
return 0;
}