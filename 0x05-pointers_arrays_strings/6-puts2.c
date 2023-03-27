#include <stdio.h>
#include "main.h"
/**
 * puts2-  prints every other character of a string.
 * @str: string to input.
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int l;


		l = 0;
		while (*(str + l) != '\0')
		{
			l++;
		}

		i = 0;
		while (i <= l - 1)
		{
		_putchar(*(str + i));

		i = i + 2;
		}
		_putchar('\n');

}
