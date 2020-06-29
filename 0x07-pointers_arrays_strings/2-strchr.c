#include "holberton.h"
/**
  */
char *_strchr(char *s, char c)
{
	int i;
	char *tmp;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
		{ tmp = & s[i];
			return (tmp);
		}
return (0);
}

