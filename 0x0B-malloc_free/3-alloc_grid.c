#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 *@width: width.
 *@hight: hight.
 * Return: pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
        int **ptr;
        int i = 0, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(height * sizeof(int *));


        if (ptr == NULL)
                return (NULL);
	for (i=0; i<height; i++)
	{

		ptr[i]= malloc (width *sizeof (int));

		j=0;
		while (j<width)
		{
			ptr[i][j]=0;
			j++;
		}

	}
	if (ptr == NULL)
	{
		free(ptr);
                return (NULL);
	}
	return (ptr);
}
