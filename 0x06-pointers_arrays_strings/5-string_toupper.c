#include "main.h"

/**
 * string_toupper -> To change all lowercase letters of a string to uppercase
 * @a: striung param
 *
 * Return: String
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] >= 97 && a[i] <= 122)
			a[i] = a[i] - 32;
		i++;
	}
	return (a);
}
