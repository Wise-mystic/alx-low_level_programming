#include <stdio.h>

int main(void)
{
    int limit = 1024;
    int sum = 0;

    int sum_of_3 = (3 * ((limit - 1) / 3) * (((limit - 1) / 3) + 1)) / 2;

    int sum_of_5 = (5 * ((limit - 1) / 5) * (((limit - 1) / 5) + 1)) / 2;

    int sum_of_15 = (15 * ((limit - 1) / 15) * (((limit - 1) / 15) + 1)) / 2;

    sum = sum_of_3 + sum_of_5 - sum_of_15;

    printf("The sum of multiples of 3 or 5 below 1024 is: %d\n", sum);

    return 0;
}

