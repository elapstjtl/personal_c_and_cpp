/*
 * @Author: your name
 * @Date: 2020-10-15 13:44:58
 * @LastEditTime: 2020-11-30 09:51:45
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\c\pta\7-4 .c
 */
#include<stdio.h>
#include<windows.h>

int main(void)
{
int m=0,n,i,j;
scanf("%d %d",&m,&n);

int b[1000] = {0};
int a[m][n];
for (i = 0; i <m;i++)
{
	for (j = 0; j <n;j++)
	scanf("%d",&a[i][j]);
}
for (i = 0; i <m;i++)
{
	for (j = 0; j <n;j++)
	b[i] += a[i][j];
}
for (i = 0;i<m;i++)
printf("%d\n",b[i]);
system("pause");
return 0;
	
	
}
