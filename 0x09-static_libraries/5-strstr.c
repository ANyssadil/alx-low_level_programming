#include "main.h"

/**
 * _strstr - locates a substring.
 *@haystack: string to be scanned.
 *@needle: string  to match in haystack.
 * Return: a pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	if (*needle == 0)
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (needle[0] == haystack[i])
		{
			j = 1;
			while (needle[j] != '\0' && needle[j] == haystack[i + j])
			{
				j++;
			}

			if (needle[j] == '\0')
				return (&haystack[i]);

		}
		i++;
	}
	return ('\0');

}
