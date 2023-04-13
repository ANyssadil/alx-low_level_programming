#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated.
 * @old_size:allocated space, in bytes, for ptr.
 * @new_size: he new memory block
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int min, i;
	char *ptrn, *ptr_to_char;/*convert ptr (void) to char */

	if (old_size < new_size)
		min = old_size;
	else if (old_size > new_size)
		min = new_size;
	else
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptrn = (char *)malloc(new_size);
		return (ptrn);
	}
	else
		ptrn = (char *)malloc(new_size);
	if (ptrn == NULL)
		return (NULL);
	ptr_to_char = ptr;
	for (i = 0; i < min; i++)
		ptrn[i] = ptr_to_char[i];
	free(ptr);
	return (ptrn);
}
