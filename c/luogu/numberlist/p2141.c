/*
 * @Author: your name
 * @Date: 2020-11-02 12:41:19
 * @LastEditTime: 2020-11-03 10:30:28
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\numberlist\p2141.c
 */
#include<stdio.h>
#include<math.h>
#include<windows.h>//vscode加上，没有自动暂停
int countnum(int n);
int main(void)
{
    int n,i=0,j,total,k = 0,count = 0;
    char ch;
    scanf("%d",&n);
    total = countnum(n);//求和最大的边界，防止越界
    int b[total];
    int a[n];

    do              //输入数组，结束不一定是回车
    {
        scanf("%d",&a[i]);
        i++;
    } while ((ch=getchar())!='\n'&&ch!=EOF);



    for (i=0;i<total;i++) //初始化判断数组，一定放在后面，不知道为何输入数组时会转移到b数组里面
    {
        b[i] = 0;
    }


   for(int i=0;i<n;i++)  
       for(int j=i+1;j<n;j++)   
          for(int k=0;k<n;k++)   //遍历所有，一个一个来
             if(k!=i&&k!=j&&a[i]+a[j]==a[k]&&b[k]==0)   //没有数过并且不是边界
                {
                   count++;
                   b[k]=1;   //数过的数为1
                }
printf("%d",count);
system("pause");
return 0;
}

int countnum(int n)//等差数列求和
{
    int i,result=0;
    for (i = 1;i<n;i++)
    {
        result = result+i;
    }
    return result;
}