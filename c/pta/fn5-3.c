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
		for (kong = n-line;kong>0;kong--)//��ӡ��һ����ո񣬵ȴ�imp��ӡ�겹�� 
		printf(" ");
		for (imp = 1;imp <=line;imp++)//���ȼ���ͬ 
		{
			printf("%d ",line);
		}
		printf("\n");
	
	} 
}

