#include<stdio.h>

void quick_sort(int array[],int left,int right);
void quick_sort(int array[],int left,int right)
{
	int i =left,j = right;
	int temp;
	int pivot;
	
	pivot = array[(left+right) / 2];
	
	while (i<=j)//结束判断条件 
	{
		while (array[i] <pivot)//从右向左找小于基准的元素 
		{
			i++;
		}
		while (array[j] > pivot)//从左向右找小于基准的元素
		{
			j--;
		}
		if (i <=j)//交换前提 
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j--;
			
		}
	}
	
	if (left < j)
	{
		quick_sort(array,left,j);//这里的输入提供了右边新数组 
	}
	if (i < right)
	{
		quick_sort(array,i,right);//提供了左边的新数组 
	}	
	
	
}

int main(void)
{
	int array[3];
	int i,length;
	for (i = 0;i<=2;i++)
	{
		scanf("%d",&array[i]);
		getchar();
	}
	
	length = sizeof(array) / sizeof(array[0]);
	quick_sort(array,0,length-1);
	for (i = 0;i<length;i++)
	{
		printf("%d ",array[i]);
	}
	
	
} 
