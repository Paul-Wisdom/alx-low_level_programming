#include "main.h"

/**
 * array_range - creates an array contai
 * ning all values from min to max orderly
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int range, i;
	int *p;

	range = max - min + 1;
	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * range);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < range; i++, min++)
		p[i] = min;
	return (p);
}
