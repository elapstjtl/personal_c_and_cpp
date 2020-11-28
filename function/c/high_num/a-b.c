/*
 * @Author: your name
 * @Date: 2020-11-12 18:48:41
 * @LastEditTime: 2020-11-12 19:31:30
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\function\high_num\a-b.c
 */
#include<stdio.h>
#include<windows.h>
#include<math.h>
#define max(a,b) (((a) > (b)) ? (a) : (b))

int main(void)
{
    char sa[10090],sb[10090],temp[10090];
    int a[10090]={0},b[10090]={0},c[10090]={0},tmp;
    int la,lb,lc,i,flag = 0;

    scanf("%s",&sa);
    getchar();
    scanf("%s",&sb);
    la = strlen(sa);
    lb = strlen(sb);
    lc = max(la,lb);

//比较a,b大小，判断是否要交换
    //a>b,不交换
    if(la==lb)//la=lb,依次比较下
    {
        for (i=0;i<la;i++)
        {
            if(sa[i]<sb[i])
            {
                flag = 1;   //a<b,设一个flag表示负号
                strcpy(temp,sa);//交换sa,sb
                strcpy(sa,sb);
                strcpy(sb,temp);
                break;
            }   
        }
    }
    if(la<lb)
    {
        flag = 1;   //a<b,设一个flag表示负号
        strcpy(temp,sa);//交换sa,sb
        strcpy(sa,sb);
        strcpy(sb,temp);
        tmp = la;//这里要交换位数
        la = lb;
        lb = tmp;
    }

    for (i=0;i<la;i++)
        a[la-i] = sa[i] - '0';
    for (i=0;i<lb;i++)
        b[lb-i] = sb[i] - '0';
    //小学减法时间！
    for (i=1;i<=lc;i++)
    {
        if(a[i]<b[i])//小，借10
        {
            a[i+1]--;
            a[i]+=10;
        }
        c[i] = a[i]-b[i];
    }

    while(c[lc]==0 && lc>1)//减法可能出现很多0，用循环
        lc--;
    if (flag==1)
    printf("-");//加负号
    for(i = lc;i>0;i--)
        printf("%d",c[i]);
system("pause");
return 0;
    



}