#include "holberton.h"
#include <stdlib.h>
/**
 * *_strdup - creates a pointer to a new space in memory with
 * @str: string and pointer
 * Return: a pointer to a string
*/
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *du;

	if (str == NULL)
	{
		return ('\0');
	}

	while (str[i] != '\0')
	{
		i++;
	}

	du = (char *)malloc(sizeof(char) * (i + 1));

	if (!du)
	{
		return (NULL);
	}

	while (j <= i)
	{
		du[j] = str[j];
		j++;
	}
	return (du);
}
