#include "main.h"
/**
 * len - calculates the length of a given string
 * @s: given string.
 * Return: length of the string.
 */

int len(char *s)
{
	int i = 0, l = 0;

	if (s[i] != 0)
	{
		i++;
		l++;
		l += len(&s[i]);
	}
	return (l);
}

/**
 * is_pal - check if a string is palindrome.
 * @i: integer to scan the string forwards.
 * @l: length of the string.scans the string forwards
 * @s: string to be scanned.
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_pal(int i, int l, char *s)
{
	if (i >= l)
		return (1);
	else if (s[i] == s[l])
		return (is_pal(i + 1, l - 1, s));
	else
		return (0);

}
/**
 * is_palindrome - check if a string is palindrome.
 * @s: string to be scanned.
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	return (is_pal(0, len(s) - 1, s));
}
