#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,i;
	printf("请输入待录入的整数个数：");
	scanf("%d",&num);
	int *ptr[num];//定义指针数组存放malloc输出的指针 
	
	for	(i = 1;i<=num;i++)
	{
		ptr[i-1] = (int *)malloc(sizeof(int));//申请内存空间并赋予指针变量 
		printf("请输入第%d个整数：",i);
		scanf("%d",ptr[i-1]);//这里ptr本身就是一个地址，无需取址 
	}
	for (i =1;i<=num;i++)//打印结果 
	{
		printf("%d ",*ptr[i-1]);//解引用 
	 } 
} 
