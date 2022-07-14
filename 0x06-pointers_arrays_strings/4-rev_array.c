#include "main.h"

/**
 * reverse_array -> to reverse arrays
 * @a: First array
 * @n: Number of array elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
