#include "main.h"
#include <stdio.h>

/**
 * _strcmp - ompares two strings.
 *@s1: string to compare.
 *@s2: string to compare.
 * Return: result of comapraison.
 */
int _strcmp(char *s1, char *s2)
{
	int i, c;

	i = 0;
	c = 0;
	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		if (*(s1 + i) > *(s2 + i))
		{
			c = 15;
			break;
		}

		else if (*(s1 + i) < *(s2 + i))
		{
			c = -15;
			break;
		}

		else
		{
			i++;
		}
	}

	if (c != 15 && c != -15 && *(s1 + i) == '\0' && *(s2 + i) == '\0')
	{
		c = 0;
	}

	else if (c != 15 && c != -15 && *(s1 + i) == '\0')
	{
		c = -15;
	}
	else if (c != 15 && c != -15 && *(s2 + i) == '\0')
	{
		c = 15;
	}
return (c);
}
