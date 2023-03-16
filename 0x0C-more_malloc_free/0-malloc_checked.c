#include "main.h"

/**
 * malloc_checked - a functin that allocates memory
 * @b: size of memory to be allocated
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
