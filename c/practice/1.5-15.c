#include<stdio.h>
#include<math.h>

 
 int main(void)
 {
 	int i,Y,m;
 	float M,R;
 	scanf("%f %f %d",&R,&M,&Y);
 	for (i = 1;i<=Y;i++)
 	{
 		M = M*(1+R/100.0);
	}
	m = (int) M;
	printf("%d",m);
	return 0;
 }
