#include<stdio.h>
#include<string.h>
int main()
{
	char str[1024];
	int i,a,count = 0;
	scanf("%s",&str);
	for(i = 1;i*i<=strlen(str);i = i+1)//计算矩阵的边长
	{
		a = i;
	}
	
	
	for(i = 0;i <a*a;i++) //输出矩形 
	{
		printf("%c",str[i]);
		count = count+1; 
		
		
		if (count == a)//换行 
		{
			count = 0;//重置计数器 
			printf("\n");
		} 
	}	

	return 0;
 } 
