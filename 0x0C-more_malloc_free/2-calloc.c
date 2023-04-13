#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements of the array to be allocated.
 * @size: size of each element.
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = (unsigned int *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < sizeof(ptr); i++)
		ptr[i] = 0;
	return (ptr);
}

