#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *@s: string to be scanned
 *@accept: string containing the list of characters to match in s.
 * Return:length of initial segment of s consisting only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
		{
			j++;
		}

		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}
