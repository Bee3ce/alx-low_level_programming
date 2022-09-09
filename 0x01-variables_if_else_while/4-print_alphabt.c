#include <stdio.h>

/**
 * main - entry point
 * Description: prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int mp;
		for (mp = 'a'; mp <= 'z'; mp++)
	{
			if (mp != 'e' && mp != 'q')
			{
				putchar(mp);
			}
			else
			{
			}
	}
	putchar('\n');
return (0);
}
