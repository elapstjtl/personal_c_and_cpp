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
	 char cnumber[1024];
	 int length,i,count = 0;
	 itoa(number,cnumber,10);
	
	 length = strlen(cnumber);
	 if (number >= 0)
	 {
		 for (i = 0;i<length;i++)
		 {
		 	 if (atoi(cnumber[i])== digit )
		 	 {
		 	 	count++;
			  }
		 }
	}
	if (number < 0)
	 {
		 for (i = 1;i<length;i++)
		 {
		 	 if (atoi(cnumber[i])== digit )
		 	 {
		 	 	count++;
			  }
		 }
	}
return count;
}	
