#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char
 * @size: integer parameter
 * @c: charater parameter
 *
 * Return: null if size equals 0 and a pointer ro an array
 */
char *create_array(unsigned int size, char c)
{
		char *arMem;
		unsigned int i;

		if (size == 0)
			return (NULL);
		arMem = malloc(size * sizeof(char));
		if (arMem == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
			*(arMem + i) = c;
		return (arMem);
}
