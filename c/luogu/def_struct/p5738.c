/*
 * @Author: your name
 * @Date: 2020-11-06 16:17:28
 * @LastEditTime: 2020-11-06 17:14:14
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\def_struct.c\p5738.c
 */
#include<stdio.h>
#include<windows.h>
#include<math.h>
int main(void)
{
    int m,n,i,j;
    char ch;
    scanf("%d %d",&n,&m); // n表示选手号，m表示评委数
    int score[n+1][m+1]; //分数数组
    //输入数组
    for (i = 1;i<=n;i++)
    {
        for (j = 1;j<=m;j++)
        {
            scanf("%d",&score[i][j]);
            ch = getchar();
        }
    }
//处理阶段
    int max = 0,min=11; 
    int result[n+1];  //存放所有处理后结果，减去max与min的和
    memset(result, 0, sizeof(result));
    //for (i =1;i<=n;i++) //初值为0，直接用 ={0} 会兼容不通过，可以试一下memset
       // result[i] = 0;
    
    for (i =1;i<=n;i++)
    {
        for (j = 1;j<=m;j++)
        {
            if (max<score[i][j])
                max = score[i][j];
            if (min>score[i][j])
                min = score[i][j];
            
            result[i] +=  score[i][j];
        }
        result[i] = result[i]-max-min;
        max=0; // 这里要重新赋值，要不然上一循环会干扰
        min = 11;
    }
    //输出阶段
    double average[n+1]; //最后的结果
    double max2 = 0;
    for(i = 1;i<=n;i++)
    {
        average[i] = (double)result[i] / (m-2);
        if (max2<average[i])
        max2 = average[i];
    }
    printf("%.2lf",max2);
system("pause");
return 0;
}