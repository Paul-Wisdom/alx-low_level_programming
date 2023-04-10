#include "main.h"
/**
 * set_bit - set the value of bit at a given index to 1
 * @n: number
 * @index: position
 * Return: 1 for success or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;

	*n = (*n & ~mask) | (1 << index);

	 return (1);
}
