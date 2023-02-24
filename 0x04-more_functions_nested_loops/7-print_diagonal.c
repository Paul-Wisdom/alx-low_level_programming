#include "main.h"

/**
 * print_diagonal - literally
 * @n: length of diagonal
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\');
		}
	}
	_putchar('\n');
}
