/*
 * @Author: your name
 * @Date: 2020-10-26 17:48:53
 * @LastEditTime: 2020-10-26 18:06:11
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \luogu\circle\count_number.c
 */
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
int main(void)
{
    int n,x,d,count = 0;
    int i;
    scanf("%d %d",&n,&x);
    for (d = 1;d<=n;d++)
    { 
        i =d;
        while(i>0)
        {
            if(i%10==x)
            count++;
            i = i/10;
        }
    }
    printf("%d",count);
system("pause");
return 0;
}