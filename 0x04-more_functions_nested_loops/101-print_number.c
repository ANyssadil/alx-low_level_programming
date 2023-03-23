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
int p,r, N;

	if (n == 0)
	{
	_putchar(n + '0');
	}

	if (n < 0)
	{
		N= - n;
		_putchar('-');
	}

	else
	{
		N = n;
	}

		p = N / d;
		r = N % d;
		while (p == 0)
		{
		N = r ;
		d = d / 10 ;
		p = N / d;
		r = N % d;
		}

		while (d >= 10)
		{
		p = N / d;
		r = N % d;
		_putchar(p + '0');
		N = r ;
		d = d / 10 ;
		}
		_putchar(r + '0');



}

