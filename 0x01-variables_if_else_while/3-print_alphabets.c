#include <stdio.h>

/**
 * main - entry point
 * Description: prints the alphabet in lowercase, then in uppercase\n
 * Return: Always 0 (success)
 */
int main(void)
{

	int al;

	for (al = 'a' ; al <= 'z' ; al++);
	{
		putchar(al);
	}
	for (al = 'A' ; al <= 'Z' ; al++);
	{
		putchar(al);
	}
	putchar('\n');
return (0);
}
