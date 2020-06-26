#include "holberton.h"
/**
 * *_strcat:concatenates two strings.
 *@dest: entry string
 *@src: entry string
 * Return: dest pointer
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest != '\0')
	{ 
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

return (p);
}
