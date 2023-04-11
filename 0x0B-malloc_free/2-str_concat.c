#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *@s1: string to be concatenated.
 *@s2: string to be concatenated.
 * Return: pointer to concatenation of s1 and s2.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned long int i = 0, j, l1 = 0, l2 = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 != NULL)
	while (s1[l1] != '\0')
		l1++;
	if (s2 != NULL)
	while (s2[l2] != '\0')
		l2++;

	ptr = (char *)malloc((l1 + l2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	if (s1 != NULL)
	{
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	}

	if (s2 != NULL)
	{
	j = 0;
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	}
	ptr[i] = '\0';
	return (ptr);

}
