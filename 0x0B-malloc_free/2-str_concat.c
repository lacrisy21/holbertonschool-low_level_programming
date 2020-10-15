#include "holberton.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string.
*/
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *new_string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	i = 0;
	j = 0;

	new_string = malloc(sizeof(char) * (len1 + len2 + 1));

	if (new_string == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		new_string[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new_string[i + j] = s2[j];
		j++;
	}

	new_string[i + j] = '\0';
	return (new_string);
}
/**
 * _strlen - calculates length of the string
 * @str: pointer to string
 * Return: integer number of the size
*/
int _strlen(char *str)
{
	int i = 0;

	if (!str)
		return (0);

	while (str[i])
	{
		i++;
	}

	return (i);
}
