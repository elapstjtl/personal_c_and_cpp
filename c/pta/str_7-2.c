/*
 * @Author: your name
 * @Date: 2020-12-05 20:19:36
 * @LastEditTime: 2020-12-05 22:17:27
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\c\pta\str_7-2.c
 */
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main(void)
{
    char a[81];
    char b;
    gets(a);
    scanf("%c",&b);
    int count = 0,i;
    for (i = 0;i<81;i++)
    {
        if (a[i] == b)
            count++;
    }
    printf("%d",count);
    
system("pause");
return 0;
}