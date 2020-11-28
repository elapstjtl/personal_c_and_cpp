#include<stdio.h>
int main(void)
{
	int max,min,mid,temp;
	scanf("%d %d %d",&max,&min,&mid);
	if (max < min)
	{
	temp = max;
	max = min;
	min = temp;
	}
	if (max < mid)
	{
	temp = max;
	max = mid;
	mid = temp;
	}
	if (mid < min)
	{
	temp = mid;
	mid = min;
	min = temp;
	}
	
	if ((min + mid) < max)
	{
	printf("Not triangle");
	return 0;
	}
	if (min*min + mid*mid == max*max)
	printf("Right triangle\n");
	if (min*min + mid*mid > max*max)
	printf("Acute triangle\n");
	if (min*min + mid*mid < max*max)
	printf("Obtuse triangle\n");
	if (mid == min && min == max)
	{
		printf("Equilateral triangle");
		return 0;
	}
	if (mid == min || max == mid || max==min)
	printf("Isosceles triangle");
return 0;
}
