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
	printf("���ȭ��1����/2ʯͷ/3����");
	scanf("%d",&man); 
	man = man*3;//����3��Ϊ�˼��㷽�� 
	sum = man+computer;
	
	if (sum == 4||sum == 8|| sum==12)
	{
		printf("��ƽ��");
	}
	if (sum == 10||sum==5||sum==9)
	{
		printf("����Ӯ��");
	}
	if (sum == 6||sum==7||sum==11)
	{
		printf("��Ӯ��");
	}
	return 0; 
}
