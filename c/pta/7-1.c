#include<math.h>
#include<stdio.h>

int main(void)
{
	double x,s;
	scanf("%lf",&x);
	if (x>=0)
	{
		s = sqrt(x);	
	}
	else
	{
		s = (x+1)*(x+1) + 2*x + 1.0/x;	
	}	
	printf("f(%.2lf) = %.2lf",x,s);
} 
