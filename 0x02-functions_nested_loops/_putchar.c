#include <stdio.h>
#include "main.h"

int _putchar(char c)
{
	putchar(c);
}

int main(void)
{
	char *c = "Hello";

	_putchar('y');
	_putchar('\n');
	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
	return 0;
}
