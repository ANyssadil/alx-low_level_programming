#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 *@s1: string to be concatenated.
 *@s2: string to be concatenated.
 *@n: first n bytes of s2.
 * Return: pointer to the concatenation of s1 and s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j = 0, l1 = 0, l2 = 0, L;

	if (s1 == NULL)
		s1 = "";
	else
		while (s1[l1] != '\0')
			l1++;
	if (s2 == NULL)
		s2 = "";
	else
		while (s2[l2] != '\0')
			l2++;
	if (n >= l2)
	{
		L = l1 + l2 + 1;
		ptr = malloc(L);
	}
	else
	{
		L = l1 + n + 1;
		ptr = malloc(L);
	}
	if (ptr == NULL)
		return (NULL);
	L--;
	for (i = 0; i < L ; i++)
	{
		if (i < l1)
			ptr[i] = s1[i];
		else
		{
			ptr[i] = s2[j];
			j++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
