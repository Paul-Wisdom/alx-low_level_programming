#include "main.h"

/**
 * puts2 - print every other char of a string
 * @str: input string
 */
void puts2(char *str)
{
	int len, i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i <= (len - 1); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
