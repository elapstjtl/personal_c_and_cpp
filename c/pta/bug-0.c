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


int getindex(char *s)
{
	if  (strcmp(s,"Thusday") == 0)
	{
		return 4;
	}
	else
	{
			if (strcmp(s,'Saturday') == 0)
		{
			return 6;
		}
	
	}

	switch(s[0])
	{
		case'S':return 0;break;
		case'M':return 1;break;
		case'T':return 2;break;
		case'W':return 3;break;
		case'F':return 5;break;
		default:return -1;
	}
}

