#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int a;

	a = *a;
	*a = *b;
	*b = a;
}
