#include<stdio.h>
int main(void)
{
	int a[13],i = 0,sum = 0;
	int count = 0;
	char ch;
	double money;
	do
	{
		scanf("%d",&a[i]);
		sum = sum+a[i];
		i++;
		count++;
	
	}while((ch=getchar())!= '\n');
	sum += 1;
	if (sum <=2760)
	{
		money = sum*0.538;
	}
	if (2760<sum<=4800)
	{
		money = 2760*0.538 + (sum - 2760)*0.588;
	}
	if (4800<sum)
	{
		money = 2760*0.538 + 2040*0.588 +(sum - 4800)*0.838;
	}
	printf("%.1lf",money);
	return 0;
} 	
