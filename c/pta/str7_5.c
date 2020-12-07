/*
 * @Author: your name
 * @Date: 2020-12-05 20:19:36
 * @LastEditTime: 2020-12-06 09:10:24
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\c\pta\str_7-2.c
 */
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main(void)
{
    char a[10000];
    char b[10000];
    gets(a);
    gets(b);
    int count = 0,i,j;
    for (i = 0;a[i]!='\0';i++)
    {
        count = 1;
        for (j =0;b[j]!='\0';j++)
        {
            if (a[i]== b[j])
            {
                count=0;
                break;
            }
        }
        if (count)
        {
            printf("%c",a[i]);
        }
        
    }
system("pause");
return 0;
}