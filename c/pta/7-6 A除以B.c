#include<stdio.h>
int main(void)
{
	int a,b;
	double result;
	scanf("%d %d",&a,&b);
	if(b == 0)
	{
	printf("%d/0=Error",a);
	return 0;
	}
	
	result = (double)a / (double)b;
	if (b>0)
	{
		printf("%d/%d=%.2lf",a,b,result);
			return 0;
	}
	if (b<0)
	{
		printf("%d/(%d)=%.2lf",a,b,result);
			return 0;
	}
}
