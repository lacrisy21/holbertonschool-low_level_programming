#include "holberton.h"
/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string
 *@accept: bytes
 *Return: pointer to a byte in s or NULL if true
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == *accept)
	{
		break;
	}
	}
	if (s[i] == *accept)
	{
		return (&s[i]);
	}
	return (0);
}
