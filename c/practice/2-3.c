#include<stdio.h>

int main()
{
	int m,n,i;
	double a,b,sum1 = 0,sum2 = 0,result;
	
	scanf("%d %d",&m,&n);
	for (i =m;i<=n;i++)
	{
		sum1 = sum1 + i*i;
	}
	for (i =m;i<=n;i++)
	{
		sum2 = sum2 +1.0/(double) i;
	}
	result = sum1 +sum2;
	printf("sum = %.6lf",result);
	
}
