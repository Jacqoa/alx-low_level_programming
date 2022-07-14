#include "main.h"
#include <string.h>

/**
 * _strncpy -> to concatenate two strings
 * @dest: first param
 * @src: Second param
 * @n: Third param
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
