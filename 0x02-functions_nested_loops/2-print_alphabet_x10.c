#include "holberton.h"
/**
 * 2-print_alphabet_ 10 times
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	while (i < 10)
	{
		c = 'a';
		while (c < 'z')
		{
			_putchar (c);
			c = c + 1;
		}
		_putchar('\n');
		i++;
	}
}
