/*
 * @Author: your name
 * @Date: 2020-11-16 18:26:47
 * @LastEditTime: 2020-11-16 18:32:59
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\c\mooc\shangsanjiao.c
 */
#include<stdio.h>
#include<windows.h>
int main(void)
{
    int n;
    char ch;
    scanf("%d",&n);
    ch = getchar();
    int t = 0,i,j,line;
    int a[n+1][n+1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
            ch = getchar();
        }
    }
    int count = 1;
    for (i=2;i<=n;i++)
    {
        for (j = 1;j<=count;j++)
        {
            if(a[i][j] != 0)
            {
                printf("NO");
                goto A;
            }
        }
        count++;
    }
printf("YES");
A:
system("pause");
return 0;
}