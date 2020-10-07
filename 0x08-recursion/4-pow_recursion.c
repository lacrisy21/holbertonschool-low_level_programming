#include "holberton.h"
/**
* _pow_recursion - returns x raised to the power of y
* @x: Base value
* @y: Power value
* Return: -1 if Y is negative
* 1 if Y is zero
* x if Y is 1
* Power raised by the base value
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
