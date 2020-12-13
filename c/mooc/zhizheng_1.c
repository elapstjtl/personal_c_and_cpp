/*
 * @Author: your name
 * @Date: 2020-12-12 21:35:59
 * @LastEditTime: 2020-12-12 22:10:35
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\c\mooc\zhizheng_1.c
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
int main(void)
{
    char a[100];
    char *pa,*cppa;
    pa = a;
    gets(a);
    int i;
    for (;*pa != '\0';pa++)
    {
        if (*pa != ',') 
            printf("%c",*pa);
    }
    system("pause");
    return 0;
}

