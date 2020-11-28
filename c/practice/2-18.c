#include<stdio.h>
#include<math.h>

double fact(n)
{
	double i,result = 1;
	for (i = 1.0;i<=n;i++)
	{
		result = result * i;
	}
	return result;
}

int main()
{
	int n,m;
	double result,a,b,c;
	scanf("%d %d",&m,&n);
	a = fact(n);
	b = fact(m);
	c = fact(n-m);
	
	result = a/(b*c);
	printf("result = %.0lf",result);
}
