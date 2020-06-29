#include "holberton.h"
/**
 * _strspn - gets lenght of prefix substring
 * @s: string
 *@accept: bytes
 * Return: number of bytes in the initial segment
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len, i, j;

	len = 0;

	for (i = 0; s[i] != 32; i++)
	{
		if (len != i)
		{
		break;
		}
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				len++;
		}
	}
	return (len);
}


