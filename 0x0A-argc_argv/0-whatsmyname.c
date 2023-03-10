#include <stdio.h>
/**
 * main - a function that prints its own name
 *@argc: number ofvariables
 *@argv: array of var
 *Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
