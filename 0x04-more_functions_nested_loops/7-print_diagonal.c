#include "main.h"

/**
 * print_diagonal - diagonal lines made of backlashes
 * @n: number of \ to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, a;
		while (i < n && n > 0)
		{
			a = 0;
			while (a < i)
			{
				_putchar(' ');
				a++;
			}
			_putchar('\\');
			_putchar('\n');
			a++;
		}
		if (i == 0)
			_putchar('\n');
}