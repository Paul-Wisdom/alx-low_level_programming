#include "main.h"

/**
 * string_nconcat - concatenates s1 with
 * n bytes of s2 (or all of s2 if n > s2
 * @s1: string 1
 * @s2: string 2
 * @n: size
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = '';
	if (s2 == NULL)
		s2 = '';
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n < len2)
	{
		len2 = n;
	}
	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		p[i] = s2[j];
	p[i] = '\0';
	return (p);
}
