#include<stdio.h>
/**
 * main- prints the sum of the even-value not exceeding 4,000,000
 * Return: 0
 */
int main(void)
{
unsigned long int a = 1;
unsigned long int b = 2;
int i;
unsigned long int c;
unsigned long int sum = b;

for (i = 0; i < 50; i++)
{
c = a + b;

if (c < 4000000 || c % 2 == 0)
{
sum = sum + c;
}
a = b;
b = c;
}
printf("%lu\n", sum);
return (0);
}
