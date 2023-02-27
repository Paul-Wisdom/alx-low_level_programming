#include "main.h"

/**
 * _strcpy - copy a string from src to dest
 * @src: source
 * @dest: destination
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		src[i] = dest[i];
	}
	dest[i] = '\0';
	return (dest);
}

