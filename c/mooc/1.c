#include <stdio.h>

int main()
{
    int num, sum = 0,i;
    scanf("%d", &num);

    for( i = 0;;) {
        if(i >= num)
            break;

        if(i % 2 == 0 || i % 3 == 0 && i % 5 == 0)
            sum += 1;
        else
            sum += i;

        i++;
    }

    printf("%d\n", sum);
    return 0;
}
