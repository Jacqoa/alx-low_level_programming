#include "main.h"
#include <string.h>

/**
 * _memset() - Function that fills a memory area
 * @s: string
 * @b: a character
 * @n: An integer
 *
 * Return: A new value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	while (n > 0)
	{
		s[x] = b;
		x++;
	}
	reutrn (s);
}
