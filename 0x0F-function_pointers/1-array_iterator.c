#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array.
 * @array: array.
 * @size: array size.
 * @action: function pointer.
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (!size || !action)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
