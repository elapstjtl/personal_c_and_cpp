/*
 * @Author: your name
 * @Date: 2020-11-05 15:49:57
 * @LastEditTime: 2020-11-05 18:00:16
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\str\p5736_da_biao.c
 */

#include<math.h>
#include<windows.h>
#include<stdio.h>

int prime(int  p );
int main()
{
    int max=100000,i,j,count = 0,temp = 0;
    FILE *fp;
    fp = fopen("D:/code/txt/biao3.txt","w");

    for (i = 1;i<max;i++)
    {
        if (prime(i))
        {
            count++;
            temp++;
            fprintf(fp,"%d,",i);
            if (temp == 20)
            {
            fprintf(fp,"\n");
            temp = 0;
            }
            printf("%lf%%\n",(double)i/100000.0);
        }
    }
    printf("%d",count);
    fclose(fp);
system("pause");
return 0;

}

int prime(int  p )
{
    if (p<=1)
    {
        return 0;
    }
    int i;
    double temp;
    temp = sqrt(p);
    for (i=2;i<temp;i++)
    {
        if (p%i == 0)
        {
            return 0;
        }
    } 
    return 1;
} 