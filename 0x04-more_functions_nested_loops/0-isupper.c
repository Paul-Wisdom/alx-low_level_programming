#include "main.h"

/**
 * _isupper - checks 4 uppercase
 * @c: input
 * Return: 1 if true, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
