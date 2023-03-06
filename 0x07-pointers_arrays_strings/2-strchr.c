#include "main.h"

/**
 * _strchr - returns a pointer to the first occurrence of char
 * c in string s or Null if the char is not found
 * @s: string
 * @c: char
 * Return: pointer to c in s
 */
char *_strchr(char *s, char c)
{
	int i  = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return ((s + i));
		}
		else if (s[i] == 0)
			break;
	}
	return (NULL);
}
