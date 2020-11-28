#include<stdio.h>
#define pi 3.1415926

void main(void)
{
double fact(int n)
{
    int i;
    double product;

    product = 1;
    for (i = 1; i <= n; i++){
         product = product * i;
    }

    return  product;
}
printf("%lf",fact(21));
}
