#include "holberton.h"

/**
 * _puts - Prints a string
 * @str:  variable string.
 * Return: Void.
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
