/*
 * @Author: your name
 * @Date: 2020-12-18 17:54:25
 * @LastEditTime: 2020-12-18 18:06:32
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
    cout << "输入在外场的价格(代小数位，如1.0):";
    cin >> buff;
    cout << "输入在steam内的求购价格(代小数位，如1.0):";
    cin >> steam;
    result = buff / (steam*0.85) ;
    printf("%.2lf",result);
    system("pause");
    return 0;
}