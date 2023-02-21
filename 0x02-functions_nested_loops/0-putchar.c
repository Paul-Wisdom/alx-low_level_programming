#include <stdio.h>
#include "main.h"

/**
 * main - prints _putchar
 * Return: 0 for success
 */
int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
	return (0);
}
