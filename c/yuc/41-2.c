#include <stdio.h>

#define ARGUMENTS(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, ...) A11
#define COUNTS(...) ARGUMENTS(FISHC, # __VA_ARGS__, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)

int main(void)
{
        printf("COUNTS()�� %d ��������\n", COUNTS());
        printf("COUNTS(1, 2, 3)�� %d ������\n", COUNTS(1, 2, 3));

        return 0;
}
