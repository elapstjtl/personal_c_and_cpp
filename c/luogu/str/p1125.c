/*
 * @Author: your name
 * @Date: 2020-11-04 21:04:06
 * @LastEditTime: 2020-11-04 21:56:33
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\str\p1125.c
 */
#include<stdio.h>
#include<windows.h>
#include<math.h>
int prime( int p );
int main(void)
{
    char str[100];
    int t=0,i,j,maxn=0,minn=128;
    char ch;
    do  //输入字符串
    {
        scanf("%c",&str[t]);
        t++;
    }
    while((str[t-1]!='\n'&&str[t-1]!=EOF));
    int a=t-2; //a是有边界，方便一点
    int count[128] = {0};//用于存储统计个数数据的数组
    for (i = 0;i<=a;i++)
    {
        count[str[i]]++;   //将ASCII表对应位置加一
    }

    for (i = 0;i<128;i++)//找出最多与最小
{
    if (count[i]>maxn)
        maxn = count[i];
    if (count[i]<minn && count[i]!=0) //多一个判断，因为初始值的影响，保证为出现过的值
        minn = count[i];
}
//判断阶段
    if (prime(maxn-minn))
        printf("Lucky Word\n%d",maxn-minn);
    else
        printf("No Answer\n0");
system("pause");
return 0;
}


int prime( int p )//判断p是否为素数，是返回1，否返回0,这个函数之前写的，直接拿来用了，嘻嘻
{
    if (p<=1)
    {
        return 0;
    }
    int i;
	double temp;
    temp = sqrt(p);
    for (i=2;i<temp;i++)
    {
        if (p%i == 0)
        {
            return 0;
        }
    } 
    return 1;
} 