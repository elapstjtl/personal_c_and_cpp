/*
 * @Author: your name
 * @Date: 2020-12-12 22:12:50
 * @LastEditTime: 2020-12-12 22:21:20
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\c\mooc\zhizheng_2.c
 */
#include<stdio.h>
#include<windows.h>
int f(int a[],int n,int *pmax,int *pmin)
{int sum=0;
    for (int i=0;i<n;i++)
    {
        sum+=a[i];
        if (a[i]>*pmax)
            *pmax = a[i];
        if (a[i]<*pmin)
            *pmin = a[i];
    }
return sum;
}
int main(void)
{
    int n=0,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    int max=0,min=10000,*pmax,*pmin;
    pmin = &min; pmax = &max;

    sum = f(a,n,pmax,pmin);
    printf("%d %d %d",max,min,sum);
    system("pause");
    return 0;
}