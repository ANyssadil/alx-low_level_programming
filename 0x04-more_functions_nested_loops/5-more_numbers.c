#include<stdio.h>
#include "main.h"
/**
 * more_numbers- prints 10 times the numbers, from 0 to 14.
 * Return: void
 */
void more_numbers(void)
{
int i, j, b, a;

for (i = 0 ; i < 10; i++)
{
for (j = 0; j <= 9; j++)
{
_putchar(j + '0');
}
b = 2;
for (j = 1 ; j < 11 ; j++)
{
if (j % 2 != 0)
{
a = j % 2;
}
else
{
a = j - b;
b++;
}
_putchar(a + '0');
}
_putchar('\n');
}
}
