#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function to locate a string
 * @s: source string
 * @accept: accepted input
 *
 * Retiurn: Always
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (a[a])
	{
		b = 0;
		while (accept[b])
		{	
			if (s[a] == accepted[b])
			{
				s += a;
				return (s);
			}
		 	b++;
		}
		a++;
	}

	return ('\0');

}
