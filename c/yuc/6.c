#include <stdio.h>

int main()
{
        int a = 0x1234;
        char *b = (char *)&a;

        if (*b == 0x12)
        {
                printf("大端!\n");
                printf("0x1234567排序方式为 01 23 45 67 ") ; 
        }
        else
        {
                printf("小端!\n");
                printf("0x1234567排序方式为 67 45 23 01") ; 
        }

        return 0;
}
