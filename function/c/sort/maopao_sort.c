/*
 * @Author: your name
 * @Date: 2020-10-12 18:57:09
 * @LastEditTime: 2020-11-26 12:04:47
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\pta\text.c
 */
# include <stdio.h>
# include <windows.h>
# include <time.h>
void s_bubbleSort(int *arr,int n);
void j_bubbleSort(int *arr,int n);
int main()
{
    int num;
    char ch;
    num = 20;//数组总长度
    int a[num];
    int i = 0;
    int start = 5;//从哪个开始
    int end = 14;//从哪里结束

    do
    {
        scanf("%d",&a[i++]);
    } while (ch = getchar() !='\n'&&ch != EOF);

    int *pa;
    pa = &a[start];

    j_bubbleSort(pa,10);
    for (i = 0;i<num;i++)
    printf("%4d",a[i]);
    
system("pause");
return 0;
    
}

void s_bubbleSort(int *arr,int n)//按升序排列
{
	int m,i,j;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(arr[j]>arr[j+1])
			{
				m=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=m;
			}
}

void j_bubbleSort(int *arr,int n)//按降序排列
{
	int m,i,j;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(arr[j]<arr[j+1])
			{
				m=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=m;
			}
}