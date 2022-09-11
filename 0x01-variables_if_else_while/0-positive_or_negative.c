#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Entry point
 * Description: assigns a random number to the variable n when executed, and
 * prints 'n is positive', if greater than 0: 'n is negative', if less than 0:
 * and 'n is zero', if equal to 0, followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
