#include <stdio.h>
#include "main.h"
/**
 * print_array- n elements of an array of integers.
 * @a: array to input.
 * @n: number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n == 0)
	{
		printf("\n");
	}

	else if (n == 1)
	{
		printf("%d", *(a + 0));
	}
	else
	{
		printf("%d", *(a + 0));

		for (i = 1; i < n; i++)
		{
			printf(", %d", *(a + i));
		}
	}

	printf("\n");

}
