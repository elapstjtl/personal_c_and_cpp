#include <stdio.h>

int main()
{
        int a = 0x1234;
        char *b = (char *)&a;

        if (*b == 0x12)
        {
                printf("���!\n");
                printf("0x1234567����ʽΪ 01 23 45 67 ") ; 
        }
        else
        {
                printf("С��!\n");
                printf("0x1234567����ʽΪ 67 45 23 01") ; 
        }

        return 0;
}
