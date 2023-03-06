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
	bool check = false;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			check = true;
			break;
		}
	}
	if (check == true)
		return (s[i]);
	else
		return (NULL);
}
