#include <stdio.h>

int main(void)
{
    int limit = 1024;
    int sum = 0;
    int i = 3; 

    while (i < limit) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
        i++;
    }

    printf("The sum of multiples of 3 or 5 below 1024 is: %d\n", sum);

    return 0;
}

