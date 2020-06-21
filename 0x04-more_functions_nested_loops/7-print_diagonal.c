#include "holberton.h"
/**
 * print_diagonal - print a diagonal line
 *
 * @n: value for number of times to print
 * Return: void
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 0; n > a; a++)
		{
			for (b = 0; a > b; b++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
