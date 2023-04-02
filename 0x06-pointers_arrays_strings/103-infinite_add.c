#include "main.h"
/**
 *infinite_add - adds two numbers.
 *@n1: integer to add.
 *@n2: integer to add.
 *@r: buffer that the function will use to store the result.
 *@size_r: buffer size.
 * Return: void.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{	int l1 = 0, l2 = 0, max_l, i, j, k, m, over = 0;

	while (n1[l1] != '\0')
		l1++;
	while (n2[l2] != '\0')
		l2++;
	if (l1 > l2)
		max_l = l1;
	else
		max_l = l2;
	if (max_l + 1 > size_r)
		return (0);
	r[max_l] = '\0', i = max_l - 1, j = l1 - 1, k = l2 - 1;
	while (i >= 0)
	{
		if (j < 0)
		{
			r[i] = ((n2[k] - '0') + over) % 10 + '0';
			over = ((n2[k] - '0') + over) / 10;
		}
		else if (k < 0)
		{
			r[i] = ((n1[j] - '0') + over) % 10 + '0';
			over = ((n1[j] - '0') + over) / 10;
		}
		else
		{
			r[i] = ((n1[j] - '0') + ((n2[k] - '0') + over)) % 10 + '0';
			over = ((n1[j] - '0') + ((n2[k] - '0') + over)) / 10;
		} i--, j--, k--;
	}
	if (over != 0)
	{
		if (max_l + 2 > size_r)
			return (0);
		r[max_l + 1] = '\0', m = max_l;
		while (m >= 0)
		{
			r[m + 1] = r[m], m--;
		} r[0] = over + '0';
	} return (r); }
