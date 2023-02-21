#include "main.h"

/**
 * print_last_digit - literally
 * @n: input
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int c = n % 10;
	if (c >= 0)
		return (c);
	else
		return (-c);
}
