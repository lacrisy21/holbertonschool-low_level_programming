#include "holberton.h"
/**
 * print_rev - prints string in reverse
 *@s: string
 * Return: void
 */
void print_rev(char *s)
{
	int a;
	int b;

	for ( a = 0; s[a] != '\0'; a++);
	for (b = a ; s[b] >= 0; b--)
	{ 
		if (b >= 0 && b < a - 1)
		_putchar(s[b]);
	}

	_putchar('\n');
}
