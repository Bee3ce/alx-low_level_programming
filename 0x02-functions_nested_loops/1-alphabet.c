#include "main.h"

/**
 * print_alphabet - entry point
 * Description: a function that prints the alphabet, in lowercase,\n
 * Return: void
 */
void print_alphabet(void)
{
		char letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
