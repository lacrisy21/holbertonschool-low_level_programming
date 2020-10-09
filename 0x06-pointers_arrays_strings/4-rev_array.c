#include "holberton.h"
/**
 * reverse_array - reverse the content of an array of integers.
 * @a: array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	n--;
	for (i = 0; i < n; i++, --n)
	{
		temp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = temp;
	}
}
