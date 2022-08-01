#include "dog.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "poppy";
	my_dog.age = 3.5;
	my_dog.owner = "bob";
	printf("my name is %s, and I am %.1f :) - woof!\n", my_dog.name, my_dog.age);
	return (0);
}
