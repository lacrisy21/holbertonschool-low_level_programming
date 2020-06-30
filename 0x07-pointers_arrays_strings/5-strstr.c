#include "holberton.h"
/**
 * _strstr - locates a substring
 *@haystack: string
 *@needle: substring
 *Return: pointer if true, NULL is false
  */

char *_strstr(char *haystack, char *needle)
{
	int i;


	for ( ; haystack[i] != '\0'; haystack++)
	{
		for (i = 0; haystack[i] && needle[i] && haystack[i] == needle[i]; i++)
		{
		}
		if (!needle[i])
		return (haystack);
	}
	return ('\0');
}
