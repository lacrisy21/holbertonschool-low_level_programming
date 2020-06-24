#include "holberton.h"

/**
 *_strlen - returns  length of a string
 *@s: entry value char
 *Return: length
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
