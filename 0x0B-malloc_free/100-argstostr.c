#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 *@ac:
 *@av:
 * Return: .
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k, c=0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i=0; i<ac; i++)
	{
		j=0;
		while (av[i][j]!='\0')
		{	
			j++;
			c++;
		}
		c++;
	}

	ptr=(char*)malloc((1 + c) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	
	for (i=0; i<ac; i++)
	{
		for (j=0, k=0; av[i][j]!= '\0'; j++,k++)
			ptr[k]=av[i][j];
		ptr[k]='\0';
		k++;
	}
		ptr[k]='\0';
		return (ptr);
}
