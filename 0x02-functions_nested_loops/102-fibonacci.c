#include<stdio.h>
/**
 * main- prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
unsigned int a = 1;
unsigned int b = 1;
int i;
unsigned  int c;
printf("%u, ", b);
for (i = 0; i < 49; i++)
{
c = a + b;
if (i != 48)
{
printf("%u, ", c);
}
else
{
printf("%u", c);
}
a = b;
b = c;
}
printf("\n");
return (0);
}
