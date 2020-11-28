/*
 * @Author: your name
 * @Date: 2020-10-28 18:57:09
 * @LastEditTime: 2020-10-29 10:20:58
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \luogu\circle\the_longest_continuous.c
 */
#include<stdio.h>
#include<windows.h>
int main(void)
{
    int n,i = 0;
    scanf("%d",&n);
    getchar();
    int a[n];
    char ch;
    int count = 1,max = 0;


    do
    {
        scanf("%ld",&a[i++]);
    }
    while((ch=getchar())!='\n'&&ch!=EOF);



    for(i = 0;i<n;i++)
    {
        if(a[i+1] == a[i]+1)
        {
            count++;
        } 
        else
        {
            if(max>count)
            {
                count = 1;
            }
            else
            {
                max = count;
                count = 1;
            }
            
        }
    }
    printf("%d",max);
system("pause");
return 0;
}