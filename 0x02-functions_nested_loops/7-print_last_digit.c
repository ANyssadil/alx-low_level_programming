#include<stdio.h>
#include "main.h"
/**
 * print_last_digit- prints the last digit of a number.
 * @i: The integer to print
 * Return: last digit
 */
int print_last_digit(int i)
{
int result;
if (i < 0)
{
i = -i;
}
result = i % 10;
if (result < 0)
{
result = -result;
}
_putchar(result + '0');
return (result);
}
