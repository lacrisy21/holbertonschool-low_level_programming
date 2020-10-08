#include "holberton.h"
/**
* isprimenumber - check a number is a prime or not
* @i: given number
* @j: number
* Return: prime number
*/
int isprimenumber(int i, int j)
{
	if (j % i == 0)
	{
		return (0);
	}
	else if ((i * i) > j)
	{
		return (1);
	}
	else
	{
		return (isprimenumber(i + 1, j));
	}

}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: given number
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (isprimenumber(i, n));
	}
}

