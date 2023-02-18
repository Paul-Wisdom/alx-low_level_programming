#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/***
 *  main - the function generates a random number
 *  and checks if it is positive,negative or zero
 *  Return: 0 if the code runs successfully
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	       	printf("%d is positive", n) 
	}
	else if (n < 0)
	{
		printf("%d is negative", n)
	}
	else if (n == 0)
	{
		printf("%d is zero", n)
	}

	return (0);
}
