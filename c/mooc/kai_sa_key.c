#include <stdio.h>
#include <string.h>

int main()
{
    char passwd[100],encrypted[100];
    int i,j,k,t,move,ch;
    while(1)
    {
        gets(passwd);
        ch = getchar();
        scanf("%d%*c",&move);
        for(i=0; i<strlen(passwd); i++)
        {
            if(passwd[i] >= 'A' && passwd[i] <= 'Z')
            {
                passwd[i] = ((passwd[i]-'A')+move)%26+'A';
            }
            else if(passwd[i] >= 'a' && passwd[i] <= 'z')
            {
                passwd[i] = ((passwd[i]-'a')+move)%26+'a';
            }
        }
        printf("%s",passwd);
        printf("\n");
    }
    return 0;
}