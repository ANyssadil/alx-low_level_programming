#include<stdio.h>
#include "main.h"
/**
 * print_number- prints an integer using _putchar
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
int d = 10000;
int p, r;

	if (n == 0)
	{
	_putchar(n + '0');
	}

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n != 0)
	{
		p = n / d;
		r = n % d;
		while (p == 0)
		{
		n = r;
		d = d / 10;
		p = n / d;
		r = n % d;
		}

		while (d >= 10)
		{
		p = n / d;
		r = n % d;
		_putchar(p + '0');
		n = r;
		d = d / 10;
		}
		_putchar(r + '0');

	}

}
