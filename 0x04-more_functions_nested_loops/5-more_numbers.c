#include "main.h"

/**
 * more_numbers - prints 0-14 ten times
 */
void more_numbers(void)
{
	int i;
	char j, k;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j;
			if (j > 9)
			{
				_putchar('1');
				k = j % 10;
			}
			_putchar(k + '0');
		}
		_putchar('\n');
		i++;
	}
}

