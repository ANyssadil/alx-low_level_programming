#include <stdio.h>
#include "main.h"
/**
 * _strlen- returns the length of a string..
 * @s: string to input.
 * Return: void
 */
int _strlen(char *s)
{
	int i;
	int l;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	l = i;
	return (l);

}
