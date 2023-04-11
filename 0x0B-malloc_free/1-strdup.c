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
	unsigned long int i = 0;

	if (str == NULL)
		return (NULL);

	ptr = (char *)malloc((sizeof(*str) / sizeof(char)) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
