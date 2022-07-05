#include "main.h"

/**
 * print_alphabet_x10 - a function to  print out lowercase ;etters 1ox
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int floop;

	for (floop = 0; floop < 10; floop++)
	{
		int c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
	}
}
