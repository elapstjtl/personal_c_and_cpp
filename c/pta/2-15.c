#include<stdio.h>
int main()
{
	int count = 1,n,i;
	double sum=0;
	scanf("%d",&n);
	
	for (i = 1;count<=n;i=i+3)
	{
		sum = sum+((-1)^(count+1))*(1.0/i);
        count =count +1;
	}
	printf("sum = %.3lf",sum);
	return 0;		
} 

