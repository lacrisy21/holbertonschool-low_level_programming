#include "holberton.h"
/**
 * more_numbers - print 10 times the numbers
 *
 * Return:void
 */
void more_numbers(void)
{
	int a;
	int i;

	i = 0;
	while (i < 10)
	{
	for (a = 0; a <= 14 ; a++)
	{
		if (a >= 10)
			_putchar(a / 10 + 48);
			_putchar(a % 10 + 48);
	}
	_putchar('\n');
	i++;
	}
}
