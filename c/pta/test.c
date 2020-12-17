/*
 * @Author: your name
 * @Date: 2020-12-14 09:18:52
 * @LastEditTime: 2020-12-14 09:39:09
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\c\pta\test.c
 */
#include <stdio.h>
#define N 20

void max_row(int (*p)[N], int m, int n, int *max);

int main(void)
{

    int i, j, juZhen[N][N];
    int m, n ,max[N];
    scanf("%d%d", &m, &n);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &juZhen[i][j]);
        }
    }
max_row(int *p=&juZhen,m,n,max);


    for (i=0; i<m; i++)
        printf("The max in line %d is: %d\n", i+1,max[i]); 
    return 0;
}

void max_row(int (*p)[N], int m, int n, int *max)
{
    int i, j;
    for (i=0; i<m; i++, p++, max++)
    {
        *max = **p;
        for (j=0; j<n; j++)
        {
            if (*max<**p)
                *max=**p;
        }
    }
}