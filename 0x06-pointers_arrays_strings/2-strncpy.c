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
	int i, j, k, leng;

	i = 0;
	while (*(src + i) != '\0')
	{
		i++;
	}
	leng = i;

	if (leng >= n)
	{
		j = 0;
		while (j < n)
		{
			*(dest + j) = *(src + j);
			j++;
		}
	}

	else if (leng < n)
	{
		j = 0;
		while (j < leng)
		{
			*(dest + j) = *(src + j);
			j++;
		}
		k = leng;
		while (k < n)
		{
			*(dest + k) = '\0';
			k++;
		}
		*(dest + k) = '\0';
	}
	return (dest);
}
