#include<stdio.h>
void main(void)
{
	int n,i;
	char sex;
	double height;
	scanf("%d",&n);
	getchar();
	
	for (i = 0;i<n;i++)
	{
		scanf("%c %lf",&sex,&height);
        getchar();
		if (sex == 'M')
		{
			printf("%.2lf\n",height/1.09);
		}
		if (sex == 'F')
		{
			printf("%.2lf\n",height*1.09);
		}
	}
} 
