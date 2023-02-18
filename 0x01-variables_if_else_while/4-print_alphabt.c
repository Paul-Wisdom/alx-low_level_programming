#include <stdio.h>

/**
 *  main - prints alphabets except q and e
 *  Return: 0 success
 */
int main(void)
{
	char ch;
	for (ch = 'a';ch  <= 'z';ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
