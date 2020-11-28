/*
 * @Author: your name
 * @Date: 2020-11-26 12:03:56
 * @LastEditTime: 2020-11-26 12:08:42
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: \code\function\c\time\count_time.c
 */

#include<stdio.h>
#include<time.h>
clock_t start, stop; //clock_t为clock()函数返回的变量类型
double duration;
int main()
{
    start=clock();
    //******************************
    //*这里写你所要测试运行时间的程序 * 
    //******************************
    stop=clock();
    
    duration=(double)(stop-start)/CLK_TCK; //CLK_TCK为clock()函数的时间单位，即时钟打点
    printf("%f\n",duration);
    return 0;
