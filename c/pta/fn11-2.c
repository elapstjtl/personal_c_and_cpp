#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex( char *s );

int main()
{
    int n;
    char s[MAXS];

    scanf("%s", s);
    n = getindex(s);
    if ( n==-1 ) printf("wrong input!\n");
    else printf("%d\n", n);

    return 0;
}

int getindex( char *s )
{
	int day;
	char *week[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	for (day = 0;day < 7;day++)
	{
		if(strcmp(week[day],s) == 0)//全部相同返回0值 
		{
			return day;
		}
	}
	return -1; 
}
