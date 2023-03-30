#include "main.h"
#include <stdio.h>

/**
 *print_number - prints an integer.
 *@n: integer to print.
 * Return: void.
 */
void print_number(int n)
{
	int d = 10000;
	int a;
	int r;
	int flag = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (d >= 10)
	{
		a = n / d;
		r = n % d;
		if (a == 0 && flag == 0)
		{
			n = r;
			d = d / 10;
			continue;
		}
		else
		{
			_putchar(a + '0');
			flag = 1;
		}
		n = r;
		d = d / 10;
	}
	_putchar(n + '0');
}
