#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

int jiechen (int end)
{
	if (end <= 0)
	{
		return 1;
	}
	int i,result = 0;
	for(i = 1;i<=end;i++)
	{
		result = result *i;
	}
	return result;
}
double funcos( double e, double x )
{
	double result = 1;
	int i = 2;
	while (fabs(result)>=e )
	{
		result = result - pow(x,i)/jiechen(i);
		i = i+2; 
	}
	return result;
}
