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
	int flag = 1;

	i = 0;
	c = 0;

	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		if (*(s1 + i) != *(s2 + i))
		{
			c = *(s1 + i) - *(s2 + i);
			flag = 0;
			break;
		}

		else

		{
			i++;
		}
	}

	if (flag == 1 && *(s1 + i) == '\0' && *(s2 + i) == '\0')
	{
		c = 0;
	}

	else if ((flag == 1 && *(s1 + i) == '\0') || (flag == 1 && *(s2 + i) != '\0'))
	{
		c = *(s1 + i) - *(s2 + i);
	}
return (c);
}
