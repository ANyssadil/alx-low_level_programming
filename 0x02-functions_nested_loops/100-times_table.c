#include<stdio.h>
#include "main.h"
/**
 * print_times_table- prints the n times table, starting with 0
 * @n: The integer to input
 * Return: void
 */
void print_times_table(int n)
{
int i;
int j;
int p;
if (n > 15 || n < 0)
{
_putchar('\n');
}
else
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{p = i * j;
if (j == 0)
_putchar(0 + '0');
else if (p < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar((p % 10) + '0');
}
else if (p >= 10 && p < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((p / 10) + '0');
_putchar((p % 10) + '0');
}
else if (p >= 100)
{_putchar(',');
_putchar(' ');
_putchar((p / 100) + '0');
_putchar(p % 100 / 10 + '0');
_putchar(p % 100 % 10 + '0');
}}
_putchar('\n');
}}}
