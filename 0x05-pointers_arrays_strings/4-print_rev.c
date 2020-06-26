#include "holberton.h"
/**
 * print_rev - prints string in reverse
 *@s: string
 * Return: void
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++
	}
	a = a - 1;
	while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
