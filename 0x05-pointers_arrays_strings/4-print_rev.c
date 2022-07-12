#include "main.h"

/**
 * print_rev -> to print string in reverse order
 * @s: string
 */
void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (S[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar([i]);
	}
	_putchar('\n');
}
