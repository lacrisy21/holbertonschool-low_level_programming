#include "holberton.h"
/**
 * _islower -  to check for lowercase char
 *
 *@c: Value of input
 *
 *Return: 1 if true 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
