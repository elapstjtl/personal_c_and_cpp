/*
 * @Author: your name
 * @Date: 2020-11-12 10:10:37
 * @LastEditTime: 2020-11-12 10:32:24
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\high_num\a+b.c
 */
#include<stdio.h>
#include<windows.h>
#include<math.h>
#define max(a,b) (((a) > (b)) ? (a) : (b))
int main(void)
{
    char a[510],b[510];
    int a1[510]={0},b1[510]={0},c[510]={0};
    int la,lb,lc,i;
    scanf("%s",&a);
    getchar();
    scanf("%s",&b);
    la = strlen(a);
    lb = strlen(b);

    for (i=0;i<la;i++)
    a1[la-i] = a[i]-'0';
    for (i=0;i<lb;i++)
    b1[lb-i] = b[i]-'0';

    lc = max(la,lb)+1;
    for(i=1;i<lc;i++)
    {
        c[i]+=a1[i]+b1[i];//先加起来
        c[i+1] = c[i]/10;//进位操作
        c[i] = c[i]%10;//取余，只留下个位数
    }

    if(c[lc]==0 && lc>0)//去除可能剩下的0
        lc--;
    for (i=lc;i>0;i--)
        printf("%d",c[i]);
    system("pause");
    return 0;
}