#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabets
 * Return: 1 if its a letter
 * Return: 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
