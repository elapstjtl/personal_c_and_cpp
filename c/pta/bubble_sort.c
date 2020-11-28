/*
 * @Author: your name
 * @Date: 2020-10-12 18:57:09
 * @LastEditTime: 2020-11-23 09:40:41
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\pta\text.c
 */
# include <stdio.h>
# include <stdlib.h>
#include<math.h>
#include<time.h>
void bubbleSort(int *arr,int n);
int main()
{
    clock_t tstart, tend;
    tstart = clock();
    int num;
    char ch;
    //scanf("%d",&num);
    //ch = getchar();
    num = 20;
    int a[num];
    int i = 0;
    int start = 5;
    int end = 14;
    do
    {
        scanf("%d",&a[i++]);
    } while (ch = getchar() !='\n'&&ch != EOF);
    int b[10];
    for (i = 0;i<10;i++)
    {
        b[i] = a[start+i];
    }
    bubbleSort(b,10);
    for (i = 0;i<start;i++)
    printf("%4d",a[i]);
    for (i = 9;i>=0;i--)
    printf("%4d",b[i]);
    for (i = end+1;i<num;i++)
    printf("%4d",a[i]);
end = clock();
printf("\ntime=%fms\n", (double)(end - start) / CLOCKS_PER_SEC);
system("pause");
return 0;
    
}

void bubbleSort(int *arr,int n)
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