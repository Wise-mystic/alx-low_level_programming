#include "main.h"
/**
 * swap_int - Afunction that swaps values
 * @a: integer to swap
 * @b: integer to swap
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
