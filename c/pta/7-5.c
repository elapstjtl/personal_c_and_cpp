#include<stdio.h>

int main(void)
{
	int hour,minute;
	scanf("%d:%d",&hour,&minute);
		if (hour < 12)
	{
		printf("%d:%d AM",hour,minute);
	}
	if (hour > 12 )
	{
		hour = hour%12;
		printf("%d:%d PM",hour,minute);
	}
	if (hour == 12)
	{
		printf("%d:%d PM",hour,minute);
	}
	return 0;
}
