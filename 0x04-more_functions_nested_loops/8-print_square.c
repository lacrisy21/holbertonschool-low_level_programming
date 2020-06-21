#include "holberton.h"

/**
 * print_square - print a square of #
 *
 * @size: is the value for size of shape
 * Return: void
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; size > a; a++)
		{
			for (b = 0; size > b; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
