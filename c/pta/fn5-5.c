#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

int CountDigit( int number, int digit )
{
	int conpare,count;
	if (number <0)
	{
		number = number*-1;
	}
	while (number >10)
	{
		conpare = number %10;
		number = number/10;
		if (conpare == digit)
		count++;
	}
	if (number == digit)
	count++;
	return count;	
}
	 
