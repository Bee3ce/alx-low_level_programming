#include "main.h"

/**
 * _islower - entry point
 * Description: checks if a character is lowercase
 * @c: the integer value it recieves
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
	int i = 'a';
		for (i = 'a'; i <= 'z'; i++)
	{
		/* refer into c*/
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}