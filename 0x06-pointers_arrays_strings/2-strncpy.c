#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string.
 *@dest: string to be copied to.
 *@src: string to be copied.
 *@n: number of characters to copy.
 * Return: pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (i < n && *(src + i) != 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	j = i;
	while (j < n)
	{
		*(dest + i) = '\0';
		j++;
	}

	return (dest);
}
