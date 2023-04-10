#include "main.h"

/**
 * print_binary - literally
 * @n: number to be converted into binary
 */
void print_binary(unsigned long int n)
{
	int i, c = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if ((current & 1) == 1)
		{
			_putchar('1');
			c++;
		}
		else if (c != 0)
			_putchar('0');
	}
	if (c == 0)
		_putchar('0');
}
