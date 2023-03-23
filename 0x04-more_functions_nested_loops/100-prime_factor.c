#include <stdio.h>
#include "main.h"
/**
 * main- finds and prints the largest prime factor of the number 612852475143.
 * Return: void
 */


int main(void)
{
long int a;
long int i;
long  int n = 612852475143;

for (i = 2; i <= n; i++)
{
while (n % i == 0)
{
a = n;
n = n / i;
}
}
printf("%ld\n", a);

return (0);
}
