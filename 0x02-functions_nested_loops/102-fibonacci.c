#include<stdio.h>
/**
 * main- prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
unsigned long int a = 1;
unsigned long int b = 1;
int i;
unsigned long int c;
printf("%lu, ", b);
for (i = 0; i < 49; i++)
{
c = a + b;
if (i != 48)
{
printf("%lu, ", c);
}
else
{
printf("%lu", c);
}
a = b;
b = c;
}
printf("\n");
return (0);
}
