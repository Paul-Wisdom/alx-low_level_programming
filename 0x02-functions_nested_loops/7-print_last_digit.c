#include "main.h"

/**
 * print_last_digit - literally
 * @n: input
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int c = n % 10;
	
	if (n < 0)
	{
		n = (-1 * n);
	}

	_putchar(n + '0');
	return (n);
}
