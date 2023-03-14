#include "main.h"

/**
 * argstostr - concatenates arguments of a program
 * @ac: num of args
 * @av: args
 * Return: char array
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, l, buff;

	i = j = j = buff = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
		for (j = 0; av[i][j]; j++)
			l++;
	p = (char *)malloc((l * sizeof(char)) + ac + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, buff++)
			p[buff] = av[i][j];
		p[buff] = '\n';
		buff++;
	}
	p[buff] = '\0';
	return (p);
}
