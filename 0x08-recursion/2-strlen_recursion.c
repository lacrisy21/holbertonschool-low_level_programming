#include "holberton.h"
/**
 * _strlen_recursion - returns lenght of string
 * @s: string
 */
int _strlen_recursion(char *s)
{
	int i;
	i = 0;
	
	if (*s)
	{
		i = _strlen_recursion(s + 1);
		i++;
	}
	return i;
}
