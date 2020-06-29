#include "holberton.h"

/**
 * _puts - Prints a string
 * @str:  variable string.
 * Return: Void.
 */

void puts_half(char *str)
{
	int len;
	int n;

	for (len = 0; str[len] != '\0'; len++);
	if (len % 2 == 0)
		n = len / 2;
	else 
		n = (len - 1) / 2;

	for ( ; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
