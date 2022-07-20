#include "main.h"

/**
 * _strlen_recursion - function to print lenght of a string using recursion method
 * @s: string to find length
 *
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));

}
