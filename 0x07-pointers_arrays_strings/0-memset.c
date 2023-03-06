#include "main.h"

/**
 * _memset - fills size n bytes of source s with constant b bytes
 * @s: input string
 * @b: constant byte
 * @n: size in bytes
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
