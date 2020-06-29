#include "holberton.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest: string
 *@src: string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	for (len = 0; src[len] != '\0'; len++)

	for (i = 0; i < (len + 1) && src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
