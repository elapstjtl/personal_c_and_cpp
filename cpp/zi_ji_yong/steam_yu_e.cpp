/*
 * @Author: your name
 * @Date: 2020-12-18 17:54:25
 * @LastEditTime: 2020-12-18 18:40:01
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\cpp\steam_yu_e.cpp
 */
#include<iostream>
#include<stdio.h>
using namespace std;
int main(void)
{
    double buff,steam,result;
    while(true)
    {
        cout << "输入在外场的价格(代小数位，如1.0):";
        cin >> buff;
        cout << "输入在steam内的求购价格(代小数位，如1.0):";
        cin >> steam;
        result = buff / (steam*0.85);
        if (result >=1)
        {
            printf("算了，不赚钱\n");
            goto A;
        }
        printf("你相当于打了%.2lf\%\n",result*100);
        printf("每卖出一件饰品，你获得的差价为:%.2lf\n",steam*0.85-buff);
    A:
        system("pause");
    }
return 0;
}