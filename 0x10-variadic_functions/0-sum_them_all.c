#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters.
 *@n: number of argments.
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int s = 0, i;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		s += va_arg(ptr, int);
	va_end(ptr);
	return (s);
}
