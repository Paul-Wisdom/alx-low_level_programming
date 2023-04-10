#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: number
 * @index: position
 * Return: 1 for success or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;

	*n = (*n & ~mask);

	return (1);
}
