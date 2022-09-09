#include <stdio.h>

/**
 * main - entry point
 * Description: prints the alphabet in lowercase followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{

	int al;

	for (al = 'a' ; al <= 'z' ; al++)
	{
		putchar(al);
	}
	putchar('\n');
return (0);
}
