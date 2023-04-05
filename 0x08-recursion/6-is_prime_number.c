#include "main.h"
/**
 *is_prime - cheks if an integer is a prime number.
 *@n: integer to be checked.
 *@a: divisor.
 *Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime(int n, int a)
{
	if (a == n)
		return (1);
	else if (n % a == 0)
		return (0);
	return (is_prime(n, a + 1));
}
/**
 *is_prime_number - cheks if an integer is a prime number.
 *@n: number to be checked.
 *Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n == 1 || n <= 0)
		return (0);
	return (is_prime(n, 2));
}
