#include "holberton.h"
/**
 *_putchar to print the alphabet in lowercase
 *
 *Return: Always 0
 */
void print_alphabet(void)
{
	int i;
	i = 0;
	while (i < 26)
	{
		_putchar('a' + i);
		i++;
	}
	_putchar('\n');
}
