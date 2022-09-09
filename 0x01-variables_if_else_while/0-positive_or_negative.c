#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: prints if a number is positive or negative
 * Return: 0
 */
int main(void)
{
	int n = 0;

	if (n > 0)
	{
		printf("is positive");
	}
	else if (n == 0)
	{
		printf("is zero");
	}
		else if (n < 0)
	{
		printf("is negative");
	}
		return (0);
}
