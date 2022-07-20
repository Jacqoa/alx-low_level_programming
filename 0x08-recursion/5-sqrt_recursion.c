#include "main.h"

int_sqrt(int, int);

/**
 * _sqrt_recursion - square root function
 * @n: integer to be sqaure
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));

}

/**
 * _sqrt - recursive square root
 * @n: number
 * @i: iterator
 *
 * Return: an intger
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
