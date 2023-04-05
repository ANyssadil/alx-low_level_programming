#include "main.h"

/**
 * _strlen_recursion- returns the length of a string.
 *@s: string.
 * Return: void.
 */
int _strlen_recursion(char *s)
{
	int i = 0, l = 0;

	if (s[i] != '\0')
	{

		i++;
		l = _strlen_recursion(&s[i]);
		l++;
	}
	return (l);
}
