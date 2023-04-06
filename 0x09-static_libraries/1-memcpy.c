#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: pointer to the destination where the content is to be copied.
 * @src: pointer to the source of data to be copied.
 * @n: number of bytes to be copied.
 * Return: pointer to destination .
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
}
	return (dest);
}
