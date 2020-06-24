#include "holberton.h"
/**
 * swap_int - swap the value of int
 * @a: entry value int
 * @b: entry value int
 */
void swap_int(int *a, int *b)
{
	int a1 = *b;
	int b1 = *a;

	*a = a1;
	*b = b1;
}
