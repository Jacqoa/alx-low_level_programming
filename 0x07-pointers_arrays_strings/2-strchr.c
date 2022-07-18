#include "main.h"

/**
 * _strchr - this is a string character
 * @s: given string
 * @c: charcetr
 *
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
}
