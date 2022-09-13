#include "main.h"

/**
 * main - entry point
 * Description: prints _putchar as a message\n.
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int str[] = {80, 100, 115, 112, 85, 90};
	int count, sz;
		sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
