#include <stdio.h>

void pyramid( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    pyramid(n);

    return 0;
}


void pyramid(int n)
{
	int line,kong,imp;
	for (line = 1;line<=n;line++)
	{
		for (kong = n-line;kong>0;kong--)//打印第一个大空格，等待imp打印完补充 
		printf(" ");
		for (imp = 1;imp <=line;imp++)//优先级相同 
		{
			printf("%d ",line);
		}
		printf("\n");
	
	} 
}

