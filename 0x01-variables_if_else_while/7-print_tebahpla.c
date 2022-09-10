#include <stdio.h>
/**
 * main - entry point
 * Description: prints the lowercase alphabet in reverse\n
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
		for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
