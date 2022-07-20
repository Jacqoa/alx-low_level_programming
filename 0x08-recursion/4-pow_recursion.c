#include "main.h"

/**
 * _pow_recursion - recursion function
 * @x: first input
 * @y: second input
 *
 * Return: string
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
