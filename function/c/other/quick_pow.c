/*
 * @Author: your name
 * @Date: 2020-11-12 10:59:34
 * @LastEditTime: 2020-11-12 11:37:07
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\def_case\quick_pow.c
 */
#include<stdio.h>
#include<windows.h>
long long qpow(long long base,long long power,long long mod) //返回一个结果，但不超过longlong
{
    long long result = 1;
    while (power > 0) 
    {
        if (power % 2 == 0) 
        {
            //如果指数为偶数
            power = power / 2;//把指数缩小为一半
            base = base * base % mod;//底数变大成原来的平方
        } 
        else 
        {
            //如果指数为奇数
            power = power - 1;//把指数减去1，使其变成一个偶数
            result = result * base % mod;//此时记得要把指数为奇数时分离出来的底数的一次方收集好
            power = power / 2;//此时指数为偶数，可以继续执行操作
            base = base * base % mod;
        }
    }
return result;
}
int main(void)
{
    long long base;
    long long power;
    long long mod;
    long long end;
    scanf("%lld %lld %lld",&base,&power,&mod);
    end = qpow(base,power,mod);
    if (1==mod)
    end =0;
    printf("%lld^%lld mod %lld=%lld",base,power,mod,end);
    system("pause");
    return 0;

}

