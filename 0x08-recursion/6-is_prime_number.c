#include "holberton.h"
/**
* is_prime_number - check a number is a prime or not
* @n: given number
* Return: -1 if Y is negative
* 1 if Y is zero
* x if Y is 1
* Power raised by the base value
*/
int is_prime_number(int n)
{
	int i = 0;
		if (n % i == 0)
			return (0);
		else
		{
			return ( is_prime_number(n-i));
		}
}
