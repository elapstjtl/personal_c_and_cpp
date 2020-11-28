/*
 * @Author: your name
 * @Date: 2020-11-07 08:36:47
 * @LastEditTime: 2020-11-07 08:49:27
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\def_struct.c\p5740_2.c
 */
#include<stdio.h>
#include<string.h>
#include<windows.h>
struct student{
    int number;
    int firscore;
    int secscore;
    double zhonghe;
    int sum;
}s[999]; //结构体数组
int main()
{
    int n,i,j;
    scanf("%d",&n);
    //输入到结构体变量里面去
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&s[i].number,&s[i].firscore,&s[i].secscore);
        s[i].zhonghe=(double)s[i].firscore*0.7+(double)s[i].secscore*0.3;//计算综合分数
        s[i].sum=s[i].firscore+s[i].secscore;//计算总分
    }
    for(i=0;i<n;i++)
    {
        if (s[i].zhonghe>=80 && s[i].sum>140)
            printf("Excellent\n");
        else
        {
            printf("Not excellent\n");
        }
        
    }
    
system("pause");
return 0;
}