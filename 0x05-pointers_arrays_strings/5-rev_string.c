#include <stdio.h>
#include "main.h"
/**
 * rev_string-  reverses a string.
 * @s: string to reverse.
 * Return: void
 */
void rev_string(char *s)
{
				int i;
				int l;
				char c;

				l = 0;
				while (*(s + l) != '\0')
				{
					l++;
				}


				i = 0;
				while (i <= l / 2)
				{
					c = *(s + i);
					*(s + i) = *(s + l - 1 - i);
					*(s + l - 1 - i) = c;

					i++;
				}

}
