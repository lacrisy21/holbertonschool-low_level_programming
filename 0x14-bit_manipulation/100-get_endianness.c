#include "holberton.h"
/**
 * get_endianness - check the endianness
 * Return: 1 little-endian, 0 big-endian. 
 */
int get_endianness(void)
{
	int i = 0;
	char *a = (char *)&i;

	if (*a)
		return (1);
	else
		return (0);
}
