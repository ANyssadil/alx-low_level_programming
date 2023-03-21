#include<stdio.h>
/**
 * main- prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
long long int a = 1;
long long int b = 1;
int i;
long long int c;
printf("%llu, ", b);
for (i = 0; i < 49; i++)
{
c = a + b;
if (i != 48)
{
printf("%llu, ", c);
}
else
{
printf("%llu", c);
}
a = b;
b = c;
}
printf("\n");
return (0);
}
