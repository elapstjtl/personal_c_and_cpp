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
	a = sum(n-1)+n;//这里实际加的值为n,当sum函数只是跳出，n为加的数 
	return a;
}
