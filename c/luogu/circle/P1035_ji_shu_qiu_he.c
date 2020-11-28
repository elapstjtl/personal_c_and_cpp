/*
 * @Author: your name
 * @Date: 2020-10-26 18:11:41
 * @LastEditTime: 2020-10-26 18:18:17
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \luogu\circle\P1035_ji_shu_qiu_he.c
 */
#include<stdio.h>
#include<windows.h>
int main(void)
{
    double k,n=0;
    scanf("%lf",&k);
    double sum = 0,num;
    while(sum<=k)
    {
        n++;
        num = 1.0/n;
        sum+=num;
    }
    printf("%1.lf",n);
system("pause");
return 0;
}