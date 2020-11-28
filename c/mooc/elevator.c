#include<stdio.h>
#include<windows.h>
int main(void)
{
    int a[105]={0},time=0;
    int flag[105]={0};
    int t = 0,i,count=0;
    char ch;
    do
    {
        scanf("%ld",&a[++t]);
    }
    while((ch=getchar())!='\n'&&ch!=EOF);

    int max = 0,min;
    for (i=2;i<=a[1]+1;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    min = max;
    for (i=2;i<=a[1]+1;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    
    time += max*(6+4);
    for (i=2;i<=a[1]+1;i++)
    {
        for (t=0;t<=a[1]+1;t++)
        {
            if(a[i] == flag[t])
            {
                count++;
                break;
            }
        }
        time+=5;
        flag[i] = a[i];
    }
    printf("%d",time-count*5);
system("pause");
return 0;
}