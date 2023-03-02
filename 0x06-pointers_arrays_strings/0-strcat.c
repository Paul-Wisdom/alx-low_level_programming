#include "main.h"

/**
 * _strcat - concatenate two strings
 * @src: source file
 * @dest: destination file
 * Return: destination file
 */

char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = 0;
	while (dest[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (src[len2] != '\0')
	{
		len2++;
	}
	for (i = 0; i < len2; i++)
	{
		dest[len1 + 1] = src[i];
	}
	dest[len1 + len2] = '\0';
	return (dest);
}
