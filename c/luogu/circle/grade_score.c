/*
 * @Author: your name
 * @Date: 2020-10-29 10:09:11
 * @LastEditTime: 2020-10-29 10:23:02
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\circle\grade_score.c
 */
#include<stdio.h>
#include<math.h>
#include<windows.h>
int main(void)
{
    int max = 0,min,n,i = 0;
    char ch;
    double result,sum = 0;
    scanf("%d",&n);
    int num[n];



    do
    {
        scanf("%ld",&num[i++]);
    }
    while((ch=getchar())!='\n'&&ch!=EOF);



    for(i = 0;i<n;i++)
    {
        if(num[i] >max)
        max = num[i];
    }
    min =max;
    for(i = 0;i<n;i++)
    {
        if(num[i] < min)
        min = num[i];
    }
    for(i = 0;i<n;i++)
    {
        sum +=num[i];
    }
    sum = sum-max-min;
    result = (sum)/(double)(n-2.0);
printf("%.2lf",result);
system("pause");
return 0;
}