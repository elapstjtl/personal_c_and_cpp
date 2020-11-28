/*
 * @Author: your name
 * @Date: 2020-11-05 17:23:01
 * @LastEditTime: 2020-11-05 18:32:25
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\str\p5736.c
 */
#include<stdio.h>
#include<windows.h>
#include<math.h>
int prime(int  p );
int main()
{
    int n,i = 0,j,count = -1;
    char ch;
    //输入
    scanf("%d",&n);
    int a[n];
    int result[9657] = {0};
    do
    {
        scanf("%d",&a[i]);
        i++;
    } while ((ch=getchar()) != '\n'&&ch!=EOF);

    for (i =0;i<n;i++)
    {
        if (prime(a[i])) 
        {
            count++; //输入到resultl前面
            result[count] = a[i];
        }
    }
    for (i = 0;i<count;i++)
        printf ("%d ",result[i]);
    printf("%d",result[count]); //最后没有空格
    
system("pause");
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
    for (i=2;i<=temp;i++)
    {
        if (p%i == 0)
        {
            return 0;
        }
    } 
    return 1;
} 