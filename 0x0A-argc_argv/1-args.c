#include <stdio.h>
/**
 * main - prints number of args passed
 * @argc: no of args
 * @argv: args
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
