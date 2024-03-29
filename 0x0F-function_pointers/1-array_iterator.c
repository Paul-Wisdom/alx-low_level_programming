#include <stdio.h>
/**
 * array_iterator - A function that executes another
 * function given as a parameter on every elemenit
 * of an array
 * @array: int array
 * @size: size of array
 * @action: function parameter
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
