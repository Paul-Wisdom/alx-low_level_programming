#include "main.h"

/**
 * _puts - print function
 * @str: string input
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
