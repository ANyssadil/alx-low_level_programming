#include "main.h"
#include <stdio.h>

/**
 *leet - encodes a string into 1337.
 *@s: string to encode.
 * Return: encoded string.
 */
char *leet(char *s)
{
	char l[] = {'a', 'e', 'o', 't', 'l'};
	char u[] = {'A', 'E', 'O', 'T', 'L'};
	char r[] = {'4', '3', '0', '7', '1'};
	int i, j;

	i = 0;
	while (*(s + i) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + i) == l[j] || *(s + i) == u[j])
			{
				*(s + i) = r[j];
			}


		}
		i++;
	}
	return (s);
}
