#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 */
void rev_string(char *s)
{
	int len, i;
	char ch;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = (len - 1); i >= (len / 2); i--)
	{
		ch = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = ch;
	}
}
