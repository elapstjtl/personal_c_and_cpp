#include<stdio.h> 
#include<time.h>
#include<stdlib.h>

int main()
{
	time_t t;
	int man,computer,sum;
	t= time(NULL);
	
	srand(t);
	computer = rand()%3;+1;
	printf("请出拳（1剪刀/2石头/3布）");
	scanf("%d",&man); 
	man = man*3;//乘以3是为了计算方便 
	sum = man+computer;
	
	if (sum == 4||sum == 8|| sum==12)
	{
		printf("打平了");
	}
	if (sum == 10||sum==5||sum==9)
	{
		printf("电脑赢了");
	}
	if (sum == 6||sum==7||sum==11)
	{
		printf("人赢了");
	}
	return 0; 
}
