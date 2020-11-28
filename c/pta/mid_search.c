/*
 * @Author: your name
 * @Date: 2020-10-06 14:55:43
 * @LastEditTime: 2020-11-19 12:19:11
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\c\yuc\test.c
 */
#include<stdio.h>
#include<windows.h>
int binfind(int x,int a[],int n)
{
 int top=0,bottom=n-1,mid;
   while(top<=bottom)
    {
     mid=(top+bottom)/2;
     if(a[mid]==x)
        {return mid+1;} //返回位置
     else if(x>a[mid])  //如果目标比中间大
      top=mid+1;       //将底设为中间进一
     else 
        bottom=mid-1;  //如果目标比中间小，将头设为中间减一
    }
    return -1;  //循环退出，没有
}
int main()
{
 int a[9]={1,2,3,3,3,3,4,5,6};
    int x=3;
    int top=0,bottom=5,mid;
    int ret;
    ret=binfind(x,a,6);
    if(ret==-1) printf("no find");   //没有结果
    else printf("%d",ret);
    system("pause");
    return 0;
} 