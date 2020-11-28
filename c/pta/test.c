/*
 * @Author: your name
 * @Date: 2020-11-23 08:43:42
 * @LastEditTime: 2020-11-23 09:30:48
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\c\pta\test.c
 */
# include <stdio.h>
# include <stdlib.h>
#include<math.h>
int main(void)
{
    int num;
    int i;
    double sum = 0,ave,result;
    char ch;
    scanf("%d",&num);
    ch = getchar();
    int a[num];
    do
    {
        scanf("%d",&a[i++]);
    } while (ch = getchar() !='\n'&&ch != EOF);
    for (i = 0;i<num;i++)
        sum+=a[i];
    ave = sum/num;
    sum = 0;
    for (i = 0;i<num;i++)
        sum+=(a[i]-ave)*(a[i]-ave);
    result = sqrt(sum/num);
    printf("%.5lf",result);
    system("pause");
    

}