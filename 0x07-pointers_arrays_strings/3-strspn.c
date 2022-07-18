#include "main h"

/**
 * _strspn - Entry point
 * @s: input string
 * @c: input string
 *
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0, c;

for (; s[i] >= '\0'; i++)
{
	if (s[i] == c)
		return (&s[i]);
}
return (0)
}
