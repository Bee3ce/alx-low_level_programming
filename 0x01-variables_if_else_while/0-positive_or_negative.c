#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Description: prints if a number is positive or negative
 * Return: 0
 */

int main(void)
{
	int n;

	if (n > 0)
	{
		printf("is positive\n", n);
	}
	else if (n == 0)
	{
		printf("is zero\n", n);
	}
	else if (n < 0)
	{
		printf("is negative\n", n);
	}
	return (0);
}
