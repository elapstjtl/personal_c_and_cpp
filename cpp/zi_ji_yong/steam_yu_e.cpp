/*
 * @Author: your name
 * @Date: 2020-12-18 17:54:25
 * @LastEditTime: 2020-12-18 20:06:25
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\cpp\steam_yu_e.cpp
 */
#include<iostream>
#include<stdio.h>
using namespace std;
struct shipin
{
    char name[100];
    double buff;
    double steam;
    double rate;
    double cha_jia;
};
void j_qsortrate(shipin *a,int n);
int main(void)
{
    int i=0,flag,count=0;
    shipin a[100];
    while(true)
    {
        cout << "输入饰品名字：";
        cin >> a[i].name;
        cout << "输入在外场的价格(代小数位，如1.0):";
        cin >> a[i].buff;
        cout << "输入在steam内的求购价格(代小数位，如1.0):";
        cin >> a[i].steam;
        a[i].rate = a[i].buff / (a[i].steam*0.85);
        a[i].cha_jia = a[i].steam*0.85 - a[i].buff;
        if (a[i].rate >=1)
        {
            printf("算了，不赚钱\n");
            goto A;
        }
    A:
        cout << "是否继续(1/0):";
        cin >> flag;
        if (flag == 0)
            break;
        i++;
        count++;
    }
    
    j_qsortrate(a,count-1);
    printf("%s\n",a[count].name);
    printf("你相当于打了%.2lf\%\n",a[count].rate*100);
    printf("每卖出一件饰品，你获得的差价为:%.2lf\n",a[count].cha_jia);
system("pause");
return 0;
}

void j_qsortrate(shipin *a,int n)
{
	int left,right,key;
	shipin temp; //用于交换的结构体
	if (n<2) return;

	key = a[n/2].rate;

	for (left = 0,right = n-1;;left++,right--)
	{
		while(a[left].rate >key)
			left++;
		while(a[right].rate<key)
			right--;
		if (left >= right)
			break;
		temp =a[left];a[left] = a[right];a[right] = temp;
	}
	j_qsortrate(a,left);
	j_qsortrate(a+left,n-left);
}