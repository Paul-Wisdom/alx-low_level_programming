#include "main.h"

/**
 * print_square - literally
 * @size: length of a side
 */
void print_square(int size)
{
	int i = 0, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if ((size == 0) || (size < 0))
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
