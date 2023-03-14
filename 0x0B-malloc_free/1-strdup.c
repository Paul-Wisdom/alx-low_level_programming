#include "main.h"

/**
 * _strdup - returns a pointer to a new
 * string which is a duplicate of the string str.
 * @str: string to be duplicated
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	char *p;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
