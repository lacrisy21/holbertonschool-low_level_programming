#include "holberton.h"
/**
 * print_line -  prints a line
 * @n: define the number of times to print
 * Return:void
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; n > a; a++)
			_putchar('_');
	}
	_putchar('\n');
}
