#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers..
 *@a: array to inverse
 *@n: number of elements of the array.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int temp;

	for (i = 0, j = n - 1; i < j ; i++, j--)
	{
		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
	}
}
