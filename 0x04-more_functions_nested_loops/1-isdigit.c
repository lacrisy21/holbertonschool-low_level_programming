#include "holberton.h"
/**
 * _isdigit - checks for a digit in the input
 *
 * @c: input
 *
 * Return: 1 if true 0 if false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
