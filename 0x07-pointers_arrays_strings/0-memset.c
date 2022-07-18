#include "main.h"
#include <string.h>

/**
 * memset() - Function that fills a memory area.
 * @s: string
 * @b: a character
 * @n: An integer
 *
 * Return: A new value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
