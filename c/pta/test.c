/*
 * @Author: your name
 * @Date: 2020-12-14 09:18:52
 * @LastEditTime: 2020-12-14 09:26:54
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\c\pta\test.c
 */
#include <stdio.h>
#include <windows.h>
int main(void)
{ 
    int a[10],max,*p;
for(p=a;p<a+10;p++)
    scanf("%d",p); 
max=*a;
for(p=a+1;p<a+10;p++)
    if(*p>max)
        max=*p;
printf("max=%d\n",max);
system("pause");
return 0;
}
