#include "main.h"

/**
 * _strlen_recursion - function to ,print spring in reverse order
 * @s: input string
 *
 * Return: Reversed string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return;
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
