#include "main.h"

/**
 * _strcat - concatenate two strings
 * @src: source file
 * @dest: destination file
 * Return: destination file
 */

char *_strcat(char *dest, char *src)
{
	int len1, i;

	len1 = 0;
	while (dest[len1] != '\0')
	{
		len1++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len1 + i] = src[i];
	}
	dest[len1 + i] = '\0';
	return (dest);
}
