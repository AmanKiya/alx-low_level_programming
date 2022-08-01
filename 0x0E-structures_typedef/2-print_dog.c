#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: structure element
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!d->name)
			print("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %1f\n", d->age);
		if (!d->owner)
			print("Owner: (nil)\n");
		else
			printf("owner: %s\n", d->owner);
	}
}
