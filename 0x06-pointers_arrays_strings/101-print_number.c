#include "main.h"
#include <stdio.h>

/**
 *print_number - prints an integer.
 *@n: integer to print.
 * Return: void.
 */
void print_number(int n)
{
	int a, r, flag = 0, d = 10000;
	unsigned int N;

	if (n == 0)
	{
		_putchar(n + '0');
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			N = -n;
			}

		else
		{
			N = n;
		}

		while (d >= 10)
		{
			a = N / d;
			r = N % d;
			if (a == 0 && flag == 0)
			{
				N = r;
				d = d / 10;
					continue;
			}
			else
			{
				_putchar(a + '0');
				flag = 1;
			}
			N = r;
			d = d / 10;
		}
		_putchar(N + '0');
	}
}
