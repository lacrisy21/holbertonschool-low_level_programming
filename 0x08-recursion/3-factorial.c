#include "holberton.h"
/**
* factorial - calculates the factorial of a given number
* @n: given number
* Return: -1 if error, 1 if == 0 || 1
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
