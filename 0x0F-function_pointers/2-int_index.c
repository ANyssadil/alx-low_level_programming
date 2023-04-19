#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array.
 * @size: array size.
 * @cmp: function pointer.
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!size || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)

		if ((*cmp)(array[i]) == 1)
			return (i);

	return (-1);
}
