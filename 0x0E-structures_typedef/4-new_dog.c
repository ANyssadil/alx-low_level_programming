#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - creates a new dog.
 *@name: dog name.
 *@age: dog age.
 *@owner: dog owner.
 * Return: pointer to new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nw_dog;
	int l1 = 0, i, l2 = 0, j;

	if (name == NULL || age <= 0 || owner == NULL)
		return (NULL);
	nw_dog = (dog_t *)malloc(sizeof(dog_t));
	if (nw_dog == NULL)
		return (NULL);
	nw_dog->age = age;
	while (name[l1] != '\0')
		l1++;
	l1++;
	nw_dog->name = (char *) malloc(l1);
	if (nw_dog->name == NULL)
	{
		free(nw_dog);
		return (NULL);
	}
	else
	{
		for (i = 0; i < (l1 - 1); i++)
			nw_dog->name[i] = name[i];
		nw_dog->name[i] = '\0';
	}
	while (owner[l2] != '\0')
		l2++;
	l2++;
	nw_dog->owner = (char *) malloc(l2);
	if (nw_dog->owner == NULL)
	{
		free(nw_dog->name);
		free(nw_dog);
		return (NULL);
	}
	else
	{
		for (j = 0; j < (l2 - 1); j++)
			nw_dog->owner[j] = owner[j];
		nw_dog->owner[j] = '\0';
	} return (nw_dog);
}
