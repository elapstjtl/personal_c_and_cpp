/*
 * @Author: your name
 * @Date: 2020-10-24 09:29:11
 * @LastEditTime: 2020-10-24 09:33:49
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \luogu\san_jiao_fen_lei.c
 */
#include<stdio.h>
#include<stdlib.h>
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
		printf("Isosceles triangle\n");
		printf("Equilateral triangle");
		return 0;
	}
	if (mid == min || max == mid || max==min)
	printf("Isosceles triangle");
return 0;
}