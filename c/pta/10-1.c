#include<stdio.h>

#include <stdio.h>

int sum( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printf ("%d\n", sum(n));

    return 0;
}

int sum( int n )
{
	int a;
    if (n<0)
    {
        return 0;
    }
	if (n>=0)
	{
		if (n == 0)
		return 0;
	}  
	a = sum(n-1)+n;//����ʵ�ʼӵ�ֵΪn,��sum����ֻ��������nΪ�ӵ��� 
	return a;
}
