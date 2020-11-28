/*
 * @Author: your name
 * @Date: 2020-10-25 16:25:28
 * @LastEditTime: 2020-10-25 16:27:42
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\circle\yi_chi_zhi_chui.c
 */
#include<stdio.h>
int main(void)
{
    int length,day =1;
    scanf("%d",&length);
    while(length!=1)
    {
        length = length/2;
        day++;
    }
    printf("%d",day);

}

