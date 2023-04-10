#include "main.h"
/**
 * a function that returns the number of bits you would
 *  need to flip to get from one number to another.
 *  @n: first num
 *  @m: second num
 *  Return: num of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int current;
	unsigned long int xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = xor >> i;
		if (current & 1)
			c++;
	}

	return (c);
}
