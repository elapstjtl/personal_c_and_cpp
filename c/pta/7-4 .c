#include<stdio.h>
#include<math.h>

int main(void)
{
	int a,b;
	double money,odd,solo;
	char c;
	scanf("%d %d %c",&a,&b,&c);
	if (c == 'm')
	odd = 0.05;
	if (c=='e')
	odd = 0.03;
	
	if (b == 90)
	solo = 6.95;
	if (b == 93)
	solo = 7.44;
	if (b == 97)
	solo = 7.93;
	
	money = a*solo*(1-odd);
	printf("%.2lf",money);
	return 0;
	
	
}
