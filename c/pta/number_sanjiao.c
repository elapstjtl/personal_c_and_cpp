/*
 * @Author: your name
 * @Date: 2020-10-26 08:50:27
 * @LastEditTime: 2020-10-26 08:59:02
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\pta\number_sanjiao.c
 */
#include<stdio.h>
#include<windows.h>
int main(void)
{
    int n,count,j = 0,num,i = 0,n1;
    scanf("%d",&n);
    num = 65;
    n1 =n;
    count = 1;
    while(i<n)
    {
        for (j = 0;j<n1;j++)
        {
            printf("%c",num);
            num++; 
        }
        if(i<n-1)
        printf("\n");
        n1--;
        i++;
    }
system("pause");
return 0;
}
