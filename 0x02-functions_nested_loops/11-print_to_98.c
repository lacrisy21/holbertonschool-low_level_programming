#include "holberton.h"
#include <stdio.h>

/**
  * print_to_98 - increasing and decreasing until 98
  *
  * @n: input
  *
  * Return: void
  */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}

