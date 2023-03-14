#include "main.h"
/**
 * create_array - creates an array
 * @size: size
 * @c: char
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(c) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	p[i] = '\0';
	return (p);
}
