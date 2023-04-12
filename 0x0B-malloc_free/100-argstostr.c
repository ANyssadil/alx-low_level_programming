#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - deconcatenates all the arguments of a program.
 *@ac: number of arguments in the command line.
 *@av: 2D array where arguments are stored.
 * Return: pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			c++;
		}
		c++;
	}

	ptr = (char *)malloc((1 + c) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			ptr[k] = av[i][j];
		ptr[k] = '\n';
		k++;
	}
		ptr[k] = '\0';
		return (ptr);
}
