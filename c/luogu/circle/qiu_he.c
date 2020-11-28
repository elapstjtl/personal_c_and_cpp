/*
 * @Author: your name
 * @Date: 2020-10-27 18:32:08
 * @LastEditTime: 2020-10-27 18:33:42
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: \luogu\circle\qiu_he.c
 */
#include<stdio.h>
#include<windows.h>
int main(void)
{
    int n,i,sum = 0;
    scanf("%d",&n);
    for (i = 1;i<=n;i++)
    {
        sum+=i;
    }
printf("%d",sum);
system("pause");
return 0;
}