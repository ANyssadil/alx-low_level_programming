#include "main.h"
#include <stdio.h>

/**
 *cap_string - capitalizes all words of a string.
 *@s: string to capitalize.
 * Return: capitalized string.
 */
char *cap_string(char *s)
{
	int i, j;
	int c[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
			{
				*(s + i) = *(s + i) - 32;
			}
			else
			{
			for (j = 0; j < 13; j++)
			{
				if (*(s + i - 1) == c[j])
				{
					*(s + i) = *(s + i) - 32;
				}
			}
			}

		}

		i++;
	}
	return (s);
}
