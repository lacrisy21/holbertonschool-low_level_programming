#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int i;

	while (*dest != '\0')
	{
		dest++;
	}
	for (i = 0; i < n && *src != '\0'; i++)
	{

		*dest = *src;
		dest++;
		src++;
	}
	return (p);

}
