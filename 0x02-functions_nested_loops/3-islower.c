#include <stdio.h>
#include "main.h"

/**
 * _islower - checks lowercase lettters
 * Return: 1 for lowercase
 * Return: 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
