#include<stdio.h>

int main(void)
{
	int x,y,z,temp;
	scanf("%d %d %d",&x,&y,&z);
	
	if(x<y)
	{
		temp = x;
		x = y;
		y = temp;
	}
	if(x<z)
	{
		temp = x;
		x = z;
		z = temp;
	}
	if (y<z)
	{
		temp = y;
		y = z;
		z = temp;
	}

	printf("%d->%d->%d",z,y,x);
	
}


