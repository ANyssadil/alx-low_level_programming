#include<stdio.h>
/**
 * print_alphabet_x10 - prints 10* alph,lwr,\n.
 * Return: void
 */
void print_alphabet_x10(void)
{
for (int i = 0; i < 9; i++)
{
for (char j = 'a'; j <= 'z'; j++)
{
putchar(j);
}
_putchar('\n');
}
}
