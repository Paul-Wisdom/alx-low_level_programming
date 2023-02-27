#include "main.h"

/**
 * print_array - literally
 * @a: the array
 * @n: number of elements of the array to be
 * printed
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 1)
	{
		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
			{
				printf("%d\n", a[i]);
			}
			else
			{
				printf("%d, ", a[i]);
			}
		
		}
	}
	else 
	{
		printf("%d\n", a[0]);
	}
}
