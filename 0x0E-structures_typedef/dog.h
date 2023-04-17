#ifndef DOG_H
#define DOG_H

/**
 * struct dog - check  new type struct dog
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 * Return: Always 0.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
