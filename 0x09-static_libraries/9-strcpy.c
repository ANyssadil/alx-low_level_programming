#include <stdio.h>
#include "main.h"
/**
 * _strcpy- copies the string pointed to, by src to dest.
 * @dest: pointer to dest.
 * @src: pointer to src.
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}
