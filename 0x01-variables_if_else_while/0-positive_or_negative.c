#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Point of entry
 * Return: Always 0 (Success)
 */

int main()
{
	int n;
	strand(time(0))
	n = rand() - RAN_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
