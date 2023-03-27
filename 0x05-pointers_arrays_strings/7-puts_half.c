#include <stdio.h>
#include "main.h"
/**
 * puts_half-  prints half of a string,.
 * @str: string to input.
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int l;

	l = 0;
	while (*(str + l) != '\0')
	{
		l++;
	}

	if (l % 2 == 0)
	{
		i = (l - 1) / 2 + 1;
		while (*(str + i) != '\0')
		{
			_putchar(*(str + i));

			i++;
		}
	}

	else
	{
		i = ((l - 1) - 1) / 2 + 1;
		while (*(str + i) != '\0')
		{
			_putchar(*(str + i));

			i++;
		}
	}

	_putchar('\n');

}
