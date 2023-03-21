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
i = -1 * i;
}
result = i % 10;
_putchar(result + '0');
return (result);
}
