#include "holberton.h"
/**
 * _strncpy - copies a string
 * @dest: string
 * @src: string
 * @n: bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (p);
}
