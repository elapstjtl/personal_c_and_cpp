#include <stdio.h>

#define FIFTH_ARG(A1, A2, A3, A4, A5, ...) A2

int main(void)
{
        printf("����������ǣ�%s\n", FIFTH_ARG("APPLE", "TWIST", 3, 4, "FishC", 666));

        return 0;
}
