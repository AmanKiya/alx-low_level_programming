#include "dog.h"

/**
 * init_dog - a function that initilize a variable of type struct dog
 * @d: parameter d
 * @name: dog name
 * @age: dog age
 * @owner: owner of dog
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
