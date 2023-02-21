#include <stdio.h>
#include "main.h"

/**
 * main - prints _putchar
 * _putchar - print function
 * Return: 0 for success
 */
int _putchar(char);
int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
}
