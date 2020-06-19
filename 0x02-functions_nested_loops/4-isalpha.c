#include"holberton.h"
/**
 * _isalpha -  function to check for alpha char
 *
 * @c: Value of input
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
