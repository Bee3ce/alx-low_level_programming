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
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
		else if (n < 0)
	{
		printf("%d is negative", n);
	}
		return (0);
}