#include <stdio.h>
#include "main.h"
/**
 * print_rev- prints a string, in reverse, followed by a new line.
 * @s: string to print.
 * Return: void
 */
void print_rev(char *s)
{
		int i;
		int l;

		l = 0;
		while (*(s + l) != '\0')
		{
			l++;
		}


		i = l - 1;
		while (i >= 0)
		{
			_putchar(*(s + i));
			i--;
		}
		_putchar('\n');
}
