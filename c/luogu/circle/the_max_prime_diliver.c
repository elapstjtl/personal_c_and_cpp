/*
 * @Author: your name
 * @Date: 2020-10-29 09:54:24
 * @LastEditTime: 2020-10-29 10:06:52
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\circle\the_max_prime_diliver.c
 */
 #include<stdio.h>
 #include<windows.h>
 #include<math.h>
  int prime(int  p );
 int main(void)
 {
     int max = 0,i,n,min;
     scanf("%d",&n);
     for (i= 2;i<=n/2;i++)
     {
         if (n%i==0 && prime(i))
         {
             min = i;
             break;
             
         }
     }
     max = n/min;
     printf("%d",max);
system("pasue");
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