#include "main.h"
/**
 * print_chessboard - prints the chess board
 *
 * @a: input pointer
 *
 * Return: return nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
		i = O;
		j = o;
		while (i < 64)
		{
			if (i % 8 == O && i != O)
			{
				j = i;
				_putchar('\n');
			}
			_putchar(a[i / 8][i - j]);
			i++;
		}
		_putchar('\n');
}
