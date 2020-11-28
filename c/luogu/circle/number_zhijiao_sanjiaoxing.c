/*
 * @Author: your name
 * @Date: 2020-10-25 16:50:49
 * @LastEditTime: 2020-10-25 17:04:22
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\circle\number_zhijiao_sanjiaoxing.c
 */
#include<stdio.h>
#include<windows.h>
int main(void)
{
    int n,count,j = 0,num,i = 0,n1;
    scanf("%d",&n);
    num = 1;
    n1 =n;
    count = 1;
    while(i<n)
    {
        for (j = 0;j<n1;j++)
        {
            printf("%02d",num);
            num++; 
        }
        printf("\n");
        n1--;
        i++;
    }
system("pause");
return 0;
}
