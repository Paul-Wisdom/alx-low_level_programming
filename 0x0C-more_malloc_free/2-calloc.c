#include "main.h"
char *_memset(char *s, char b, unsigned int i);

/**
 * _calloc - allocates memory for nmeb elements of 'size' bytes
 * @nmemb: number of items
 * @size: size of each item
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int n;

	n = nmemb * size;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(n);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, n);
	return (p);
}

/**
 * _memset - assigns a char to a memory location
 * @s: mem location / string
 * @b: char
 * @n: size of s
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
