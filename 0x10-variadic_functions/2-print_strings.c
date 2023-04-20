#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line.
 *@n: number of strings  passed to the function.
 *@separator: string to be printed between numbers.
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *s;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ptr, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
