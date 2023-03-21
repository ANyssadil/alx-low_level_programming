#include<stdio.h>
#include "main.h"
/**
 * print_to_98- prints all natural numbers from n to 98
 * @n: The integer to input
 * Return: void
 */
void print_to_98(int n)
{
int i;
if (n == 98)
{
printf("%d", 98);
}
else if (n > 98)
{
for (i = n; i >= 99; i--)
{
printf("%d", i);
printf(", ");
}
printf("%d", 98);
}
else if (n < 98)
{
for (i = n; i <= 97; i++)
{
printf("%d", i);
printf(", ");
}
printf("%d", 98);
}
printf("\n");
}
