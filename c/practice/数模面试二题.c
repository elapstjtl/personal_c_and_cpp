/*
 * @Author: your name
 * @Date: 2020-10-17 10:05:29
 * @LastEditTime: 2020-10-23 10:59:33
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\practice\数模面试二题.c
 */
#include<stdio.h>
#define pi 3.1415926535897

void main(void)
{
double Rhalfcir = 0.5; 
double Rwholecir = 0.25;
double s = 0;
int i;
for(i = 0;i<=1000;i++)
	{
    s = s+  Rhalfcir*Rhalfcir*pi*0.5 + Rwholecir*Rwholecir*pi;
    Rhalfcir = 0.5*Rhalfcir;
    Rwholecir = 0.5*Rwholecir;
	}
	    printf("%.9lf\n",s);
}


