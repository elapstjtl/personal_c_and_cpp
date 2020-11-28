#include<stdio.h>

#include <stdio.h>

char *myitoa(int num, char *str);

char *myitoa(int num, char *str)
{
        int dec = 1;
        int i = 0;
        int temp;

        if (num < 0)
        {
                str[i++] = '-';
                num = -num;
        }

        temp = num;

        while (temp > 9)
        {
                dec *= 10;
                temp /= 10;
        }

        while (dec != 0)
        {
                str[i++] = num / dec + '0';
                num = num % dec;
                dec /= 10;
        }

        str[i] = '\0';

        return str;
}

int main(void)
{
        char str[1024];

        printf("%s\n", myitoa(0, str));
        printf("%s\n", myitoa(-1234, str));

        return 0;
}

