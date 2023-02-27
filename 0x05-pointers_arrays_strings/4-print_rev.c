#include "main.h"

/**
 * print_rev - print the reverse of strings
 * @s: input string
 */
void print_rev(char *s)
{
	int len, i;

	len = 0;
	while (*sh++ != '\0')
	{
		len++;
	}

	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
