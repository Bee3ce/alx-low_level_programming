#include <stdio.h>
/**
 * main - entry point
 * Description: prints all possible combinations of single-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
		for (i = '0'; i <= '9'; i++)
	{
			putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
return (0);
}
