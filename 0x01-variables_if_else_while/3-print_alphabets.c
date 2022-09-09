#include <stdio.h>

/**
 * main - entry point
 * Description: prints the alphabet in lowercase, then in uppercase\n
 * Return: Always 0 (success)
 */
int main(void)
{

	int al;

	for (al = 'a' ; al <= 'z' ; al++)
		putchar(al);
		putchar ('\n');
	}
	for (al = 'A' ; al <= 'Z' ; al++)
	{
		putchar(al);
		putchar('\n');

		getchar();
	}
return (0);
}
