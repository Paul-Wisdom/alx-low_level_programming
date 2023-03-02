#include "main.h"

/**
 * _strncpy - copy src to dest
 * @src: source
 * @dest: destination
 * @n: size of src to be copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
