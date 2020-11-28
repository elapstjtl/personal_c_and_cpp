#include<stdio.h>

void main(void)
{
	int x =30,y=50,z=80;
	if(x>y && x<z)
	
		z =x;
		x = y;
		y =z;
	
	printf("%d %d %d",x,y,z);
}
