#include "main.h"
/**
 * last_occ - finds the last occurence of a char in a string.
 *@s1: string to be scanned.
 *@c: char to be searched.
 * Return: a pointer starting with the last char if found.
 */

char *last_occ(char *s1, char c)
{
	char *s1_bis;

	if (*s1 == '\0')
		return (0);

	s1_bis = last_occ(s1 + 1, c);

	if (s1_bis != 0)
		return (s1_bis);

	if (*s1 == c)
	{
		if (*(s1 + 1) == '\0' || last_occ(s1 + 1, c) == 0)
			return (s1);
	}

	return (0);
}
/**
 *wildcmp - compares two strings.
 *@s1: string to be compared.
 *@s2: string to be compared.
 * Return: 1 if the strings can be considered identical, 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' && *s2 == '*')
	{
		if (*(s2 + 1) != '*' && *(s2 + 1) != '\0')
			return (0);
		else
			return (wildcmp(s1, s2 + 1));
	}
	else if (*s1 != '\0' && *s2 != '\0')
	{
		if (*s2 == '*' && *(s2 + 1) == '\0')
			return (1);
		else if (*s2 == '*' && *(s2 + 1) != '*')
		{
			if (last_occ(s1, *(s2 + 1)) != 0)
			{
				s1 = last_occ(s1, *(s2 + 1));
				return (wildcmp(s1 + 1, s2 + 2));
			}
			else
				return (0);
		}
		else if (*s2 != '*' && *s1 != '*')
			if (*s1 != *s2)
				return (0);
			else
				return (wildcmp(s1 + 1, s2 + 1));
		else if (*s2 == '*' && *(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
	}
	return (0);

}
