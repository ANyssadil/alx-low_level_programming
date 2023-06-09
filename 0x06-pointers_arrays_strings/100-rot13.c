#include "main.h"
#include <stdio.h>

/**
 *rot13 - encodes a string using rot13.
 *@s: string to encode.
 * Return: encoded string.
 */
char *rot13(char *s)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	i = 0;
	while (*(s + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + i) == alpha[j])
			{
				*(s + i) = r13[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
