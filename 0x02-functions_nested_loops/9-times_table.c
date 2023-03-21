#include<stdio.h>
#include "main.h"
/**
 * times_table- prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
int i;
int j;
int p;
int a;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{p = i * j;
a = p / 10;
if (a == 0)
{
_putchar((p % 10) + '0');
}
else
{
_putchar((p / 10) + '0');
_putchar((p % 10) + '0');
}
if (j != 9)
{
_putchar(',');
if (p < 5 || i <= 1 || (p < 7 && i <= 3))
{
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(' ');
}}
else
{
continue;
}}
_putchar('\n');
}}
