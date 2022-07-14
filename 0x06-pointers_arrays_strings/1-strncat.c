#include "main.h"
#include <string.h>

/**
 * _strncat -> function to concatenate two strings
 * @dest: string to overwrite
 * @src: string to copy
 * @n: number
 * Return: Return string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
