#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: integer swap
 * @b: integer swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
