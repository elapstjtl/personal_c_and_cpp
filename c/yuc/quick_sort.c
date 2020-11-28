#include<stdio.h>

void quick_sort(int array[],int left,int right);
void quick_sort(int array[],int left,int right)
{
	int i =left,j = right;
	int temp;
	int pivot;
	
	pivot = array[(left+right) / 2];
	
	while (i<=j)//�����ж����� 
	{
		while (array[i] <pivot)//����������С�ڻ�׼��Ԫ�� 
		{
			i++;
		}
		while (array[j] > pivot)//����������С�ڻ�׼��Ԫ��
		{
			j--;
		}
		if (i <=j)//����ǰ�� 
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
		quick_sort(array,left,j);//����������ṩ���ұ������� 
	}
	if (i < right)
	{
		quick_sort(array,i,right);//�ṩ����ߵ������� 
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
