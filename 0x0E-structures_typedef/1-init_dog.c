#include "dog.h"

/**
 * init_dog - initialization of dog variable
 * @d: points to dog
 * @name: points to the char dog
 * @age: dog ages
 * @owner: dog onwer
 * Return: Nill
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
