#include "main.h"

/**
 * _print_rev_recursion- prints a string in reverse.
 *@s: string to be printed.
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
		_print_rev_recursion(&s[i]);
		_putchar(s[i - 1]);
	}
}