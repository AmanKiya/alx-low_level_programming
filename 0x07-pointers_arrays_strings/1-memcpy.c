#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: a pointer dest
 * @src: a pointer src 
 * @n: unsigned interger parameter
 *
 * Return: a pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
