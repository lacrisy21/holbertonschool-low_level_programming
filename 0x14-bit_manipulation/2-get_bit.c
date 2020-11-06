#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: input value
 * @index: index, starting from 0
 * Return: -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index <= (sizeof(unsigned long int) * 8))
		return ((n >> index) & 1);

	return (-1);
}
