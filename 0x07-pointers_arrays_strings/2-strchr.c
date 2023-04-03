#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to be scanned.
 * @c: character to be searched .
 * Return: first occurrence of c, or NULL if c is not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}

	if (s[i] == '\0')
		return ('\0');
	else
		return (s+i);
}
