#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,i;
	printf("�������¼�������������");
	scanf("%d",&num);
	int *ptr[num];//����ָ��������malloc�����ָ�� 
	
	for	(i = 1;i<=num;i++)
	{
		ptr[i-1] = (int *)malloc(sizeof(int));//�����ڴ�ռ䲢����ָ����� 
		printf("�������%d��������",i);
		scanf("%d",ptr[i-1]);//����ptr�������һ����ַ������ȡַ 
	}
	for (i =1;i<=num;i++)//��ӡ��� 
	{
		printf("%d ",*ptr[i-1]);//������ 
	 } 
} 
