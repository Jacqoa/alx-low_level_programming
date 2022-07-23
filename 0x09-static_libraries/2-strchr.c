#include "main.h"

/**
 * _strchr - this is a string character
 * @s: given string
 * @c: characetr
 *
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

for (; s[i] >= '\0'; i++)
{
	if (s[i] == c)
		return (&s[i]);
}
return (0);

}
