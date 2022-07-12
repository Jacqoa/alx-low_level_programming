#include "main.h"

/**
 * -puts -> function that puts
 * 2str: to put function
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
