/*
 * @Author: your name
 * @Date: 2020-12-07 08:22:17
 * @LastEditTime: 2020-12-07 16:28:47
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\cpp\oj\p1024.cpp
 */
//看了一下洛谷的题解，发现要用递归

#include<iostream>
using namespace std;
bool isprime(int n);
void digui(int m,int sum,int first);

int n,k,m,result = 0;  //不要在这里定义，每次递归需要一个新的i
int a[50] = {0};

int main(void)
{
    cin >> n >> k;
    for (int i = 0;i<n;i++)
        cin >> a[i];
    digui(0,0,0);
    cout << result;
system("pause");
return 0;
}

bool isprime(int n) //判断n是否为素数
{
    for (int i = 2;i*i<=n;i++)
    {
        if (n%i == 0)
            return false;
    }
    return true;
}

void digui(int m,int sum,int first) //m表示选了几个数，sum表示选择的数的和，first表示最小的
{
    if (m==k) //表示已经选到符合数量的数了
    {
        if (isprime(sum))
        {
            result++;
        }

        return ;    //跳出一层递归
    }
    for (int i = first;i<n;i++)
    {
        digui(m+1,sum+a[i],i+1);    //选的数加一，和加，开始加的数像上走
    }
return ;        //全部递归走完，退出函数
}