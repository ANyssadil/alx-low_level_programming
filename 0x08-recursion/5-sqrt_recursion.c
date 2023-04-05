#include "main.h"
/**
 *is_root -  finds (if it exists) and  returns an integer 'a' such as a*a=n.
 *@n: integer.
 *@a: integer.
 *Return: natural square root.
 */
int is_root(int n, int a)
{
	if (a * a == n)
		return (a);
	else if (a * a > n)
		return (-1);
	return (is_root(n, a + 1));
}
/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n: number.
 *Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	return (is_root(n, 1));
}
