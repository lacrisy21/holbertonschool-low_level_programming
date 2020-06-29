#include "holberton.h"
/**
 * _memcpy - compies memory area
 *@dest: destiny
 *@src: source
 *@n: bytes
 * Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}


