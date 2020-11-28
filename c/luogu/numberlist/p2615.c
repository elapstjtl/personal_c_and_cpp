/*
 * @Author: your name
 * @Date: 2020-11-03 10:34:57
 * @LastEditTime: 2020-11-04 07:31:51
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\numberlist\p2615.c
 */
#include<stdio.h>
#include<windows.h>
#include<math.h>

/*奇数阶幻方最经典的填法是罗伯法。填写的方法是：
    把1（或最小的数）放在第一行正中；按以下规律排列剩下的(n×n－1)个数：
    每一个数放在前一个数的右上一格；
    如果这个数所要放的格已经超出了顶行那么就把它放在底行，仍然要放在右一列；
    如果这个数所要放的格已经超出了最右列那么就把它放在最左列，仍然要放在上一行；
    如果这个数所要放的格已经超出了顶行且超出了最右列，那么就把它放在底行且最左列；
    如果这个数所要放的格已经有数填入，那么就把它放在前一个数的下一行同一列的格内。*/
int main(void) 
{
    int i, j, key,N;
    scanf("%d",&N);
    if (1==N)
    {
        printf("1");      //输入为1时输出1
        return 0;
    }
    int a[N+1][N+1];  //初始化幻方，加一用于缓冲防止越界
    i = 0;
    j = (N+1) / 2;
    for(key = 1; key <= N*N; key++) 
    {
        if((key % N) == 1)  //当值为阶数整数倍时，向下移动
            i++;
        else 
        {
            i--;      //向右上角移动
            j++;
        }
        if(i == 0)
            i = N;    //到达边界
        if(j > N)     //到达边界
            j = 1;
        a[i][j] = key;   //输入值
    }

    for(i = 1; i <= N; i++)   //输出幻方
    {
        for(j = 1; j <= N; j++)
        {
        printf("%d ", a[i][j]);
        }
        printf("\n");   //输出完一行，换行
    }
system("pause");
return 0;
}


