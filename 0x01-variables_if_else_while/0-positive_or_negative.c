#include <stdlib.h>
#include <time.h>

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
		printf("%d is positive\n", n);
	}
		else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
		else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
		return (0);
}
