#include <stdio.h>
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: integer to be raised.
 * @y: power.
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	if (y > 1)
	x = x * _pow_recursion(x, y - 1);
	return (x);
}
