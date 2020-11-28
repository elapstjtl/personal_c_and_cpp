#include<stdio.h>
#include<math.h>

long long int factorial(int n);
int main(void)
{
	long long int n,i;
	long long int fenmu;
	double result = 1.0,x;
	scanf("%lf %lld",&x,&n);
	for(i = 1;i<=n;i++)
	{
		fenmu = (long double) factorial(i);
		result = result + pow(x,i) / fenmu;
	}
	printf("%.4lf",result);
}


long long int factorial( int n)
{
	long long int result = 1,i;
	for (i=1;i<=n;i++)
	{
		result = result *i;
	}
	return result;
	
}
