#include<stdio.h>
#include<math.h>


int square(int n);
int square(int n)
{
	return pow(3,n);
}

int main()
{
	int n,i,m;
	scanf("%d",&m); 
	for (i = 0;i<=m;i++)
	{
		n = square(i) ;
		printf("pow(3,%d) = %d\n",i,n);
	}
}
