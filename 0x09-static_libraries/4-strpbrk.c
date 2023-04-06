#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *@s: string to be scanned
 *@accept: string containing the list of characters to match in s.
 * Return: pointer to the byte in s that matches one of the bytes in accept.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
		{
			j++;
		}

		if (s[i] == accept[j])
			return (&s[i]);
		i++;
}
	return ('\0');
}
