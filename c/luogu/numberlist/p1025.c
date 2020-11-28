/*
 * @Author: your name
 * @Date: 2020-11-04 16:03:42
 * @LastEditTime: 2020-11-04 17:22:25
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\numberlist\p1025.c
 */
/*觉得没毛病。。但过不了。。对原来的图像进行7种变换，依次对比，知道得到结果图像*/
#include<stdio.h>
#include<math.h>
#include<windows.h>
char c[11][11];//定义目标数组
char b[11][11];//这是一个工具人数组
char a[11][11]; //定义未变的数组
int i,j;
int n;
int transe1();
int transe2();
int transe3();
int transe4();
int transe5();
int transe6();
int main(void)
{
scanf("%d",&n);
getchar();

    //输入阶段

    for (i = 1;i<=n;i++)
    {
        for (j = 1;j<=n;j++)
        {
            a[i][j] = getchar();
        }
        getchar();//缓冲区吸收换行符
    }

    for (i = 1;i<=n;i++)
    {
        for (j = 1;j<=n;j++)
        {
            c[i][j]= getchar();
        }
        getchar();//缓冲区吸收换行符
    }
    //输入完成

    //判断阶段
if (transe1())
{
printf("1");
system("pause");
return 0;
}
if (transe2())
{
printf("2");
system("pause");
return 0;
}
if (transe3())
{
printf("3");
system("pause");
return 0;
}
if (transe4())
{
printf("4");
system("pause");
return 0;
}
if (transe5())
{
printf("5");
system("pause");
return 0;
}
if (transe6())
{
printf("6");
system("pause");
return 0;
}
printf("7");

system("pause");
return 0;
}

int transe1()     //图案按顺时针转 90°
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        b[j][n-i+1]=a[i][j];
    }
    for(int i=1;i<=n;i++)
     for(int j=1;j<=n;j++)
     if(b[i][j]!=c[i][j])
     return 0;

     return 1;
}

int transe2() //180
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        b[n-i+1][n-j+1]=a[i][j];
    }
    for(int i=1;i<=n;i++)
     for(int j=1;j<=n;j++)
     if(b[i][j]!=c[i][j])
     return 0;

     return 1;
}

int transe3()//270
{
	transe1();  //第一次操作
	for(int i=1;i<=n;i++)
     for(int j=1;j<=n;j++)
      a[i][j]=b[i][j];   //重置矩阵
      transe2();   //第二次操作
    for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++)
     if(b[i][j]!=c[i][j])
     return 0;

     return 1;
}

int transe4()//反射
{
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        b[i][n-j+1]=a[i][j];  
    }
    for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++)
     if(b[i][j]!=c[i][j])
     return 0;

     return 1;
}

int transe5()//组合
{
	transe4();
	for(int i=1;i<=n;i++)
     for(int j=1;j<=n;j++)
      a[i][j]=b[i][j];    //重置原矩阵  
      if(transe1())
      return 1;
    for(int i=1;i<=n;i++)
     for(int j=1;j<=n;j++)
      a[i][j]=b[i][j];   //重置原矩阵 
      if(transe2())
      return 1;
    for(int i=1;i<=n;i++)
     for(int j=1;j<=n;j++)
      a[i][j]=b[i][j];   //重置原矩阵 
      if(transe3())
      return 1;
      return 0;
}

int transe6()//不变
{
    for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++)
     if(b[i][j]!=c[i][j])
     return 0;

     return 1;
}

//第七种就直接输出


