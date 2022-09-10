#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible different combinations of two digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int c, i;
		for (c = '0' ; i <= '9'; i++)
		{
		for (i = '0'; i <= '9'; i++)
		{
			if (c < 1)
			{
			putchar(c);
			putchar(i);
			if (c != 'g' || (c == 'g' && i != '9'))
					{
				putchar(',');
				putchar(' ');
					}
			}
			}
	}
		putchar('\n');
return (0);
}
