/*
 * @Author: your name
 * @Date: 2020-10-24 09:09:33
 * @LastEditTime: 2020-10-24 09:23:23
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \luogu\bmi.c
 */
#include<stdio.h>
#include<math.h>
int main(void)
{
 float w,h,BIM;
 int bim,count = 1,i;
    scanf("%f %f",&w,&h);
    BIM=w/(h*h);
    if(BIM<18.5)
        printf("Underweight");
    else if(BIM<=24)
        printf("Normal");
    else 
        bim = (int)BIM;
        while (BIM>=1)
        {
            BIM = BIM / 10.0;
            count++;
        }
        
return 0;
}