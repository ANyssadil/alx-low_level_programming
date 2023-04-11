#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates string.
 *@str: string to be duplicated.
 * Return: pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned long int i = 0, l = 0;

	if (str == NULL)
		return (NULL);
	while (str[l] != '\0')
		l++;
	l++;
	ptr = (char *)malloc(l * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
