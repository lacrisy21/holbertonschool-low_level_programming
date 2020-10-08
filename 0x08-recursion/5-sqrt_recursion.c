#include "holberton.h"
/**
 * aux - auxiliar function
 * @x: parameter
 *@n: number
 * Return: square
 */
int aux(int x, int n)
{

	if (n == x * x)
		return (x);

	if (n < x * x)
		return (-1);

	return (aux(n, x + 1));
}

/**
 * _sqrt_recursion - square root of a number
 * @n: number
 * Return: sqaure root or -1 if it's not natural
 */
int _sqrt_recursion(int n)
{
	return (aux(1, n));
}
