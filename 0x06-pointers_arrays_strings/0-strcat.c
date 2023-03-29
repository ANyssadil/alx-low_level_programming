#include "main.h"
#include <stdio.h>

/**
 * _strcat -  concatenates two strings.
 *@dest: string to be append to.
 *@src: string to be appended.
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
		int i;
		int j;

		i = 0;
		while (*(dest + i) != '\0')
		{
			i++;
		}

		j = 0;
		while (*(src + j) != '\0')
		{
			*(dest + i) = *(src + j);
			i++;
			j++;
		}
		*(src + j) = '\0';

		return (dest);

}
