include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function to search a string
 * @s: string to search
 * @accept: accepted input
 *
 * Return: Always
**/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
