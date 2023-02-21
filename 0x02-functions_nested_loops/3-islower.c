#include <stdio.h>
#include "main.h"

/**
 * _islower - checks lowercase lettters
 * Return: 1 for lowercase 0 otherwise
 * @c: int input 
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
