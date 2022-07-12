#include "main.h"

/**
 * swap_int -> function that swaps the values of two integers
 * @a: variable 1
 * @b: variable 2
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
