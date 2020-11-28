/*
 * @Author: your name
 * @Date: 2020-11-07 08:36:47
 * @LastEditTime: 2020-11-07 08:40:49
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\def_struct.c\p5740_2.c
 */
#include<stdio.h>
#include<string.h>
#include<windows.h>
struct student{
    char name[99];
    int Chinese;
    int Math;
    int English;
    int sum;
}s[999]; //结构体数组
int main()
{
    int n,i,j;
    scanf("%d",&n);
    //输入到结构体变量里面去
    for(i=0;i<n;i++)
    {
        scanf("%s%d%d%d",s[i].name,&s[i].Chinese,&s[i].Math,&s[i].English);
        s[i].sum=s[i].Chinese+s[i].Math+s[i].English;
    }
    struct student temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(s[j].sum<s[j+1].sum)
            {
                temp=s[j];s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    printf("%s %d %d %d",s[0].name,s[0].Chinese,s[0].Math,s[0].English);
    system("pause");
    return 0;
}