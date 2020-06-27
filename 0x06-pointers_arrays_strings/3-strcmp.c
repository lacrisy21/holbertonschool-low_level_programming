#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: negative, zero or positive number
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
	{
		return (*s1 - *s2);
	}
	if (*s1 == '\0')
	{
		return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
