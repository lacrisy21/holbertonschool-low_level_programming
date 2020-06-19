#include "holberton.h"
/**
 *islower to check for lowercase char
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
