#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: starting value.
 * @max: ending value.
 * Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *ptr, i, j;

	if (min > max)
		return (NULL);
	ptr = (int *) malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	j = min;
	for (i = 0; i < (max - min + 1); i++)
	{
		ptr[i] = j;
		j++;
	}
	return (ptr);
}
