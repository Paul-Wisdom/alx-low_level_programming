#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: position
 * Return: the value at the index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	n >>= index;
	if ((n & 1) == 1)
		return (1);
	else
		return (0);

	return (-1);
}
