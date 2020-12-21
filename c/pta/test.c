/*
 * @Author: your name
 * @Date: 2020-12-14 09:18:52
 * @LastEditTime: 2020-12-21 09:10:50
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\c\pta\test.c
 */
#include<stdio.h>
#include<windows.h>
void inv(int *x,int n);
int main ( )
{int i ,a[10]={3,7,9,11,0,6,7,5,4,2};
    printf("The original array:\n");
    for (i=0;i<10;i++)  printf("%3d",a[i]);
    printf("\n");
    inv(a,10);
    printf("The array has been inverted:\n");
    for (i=0;i<10;i++)  printf("%3d",a[i]);
    printf("\n");
    system("pause");
return 0;
}

void inv(int *x,int n)
{
    int a[n],i;
    for (i=0;i<n;i++)
        a[n-i] = *(x+i);
    for (i=0;i<n;i++)
        *(x+i) = a[i];
return ;
}