#include "holberton.h"

/**
 * _puts - Prints a string
 * @str:  variable string.
 * Return: Void.
 */

void _puts(char *str)
{
	for ( ; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
