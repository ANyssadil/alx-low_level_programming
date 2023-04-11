#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initialized with a specific char.
 * @size: array size.
 * @c: specific char.
 * Return: pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
