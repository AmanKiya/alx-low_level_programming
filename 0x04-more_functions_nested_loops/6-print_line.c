#include "main.h"

/**
 * print_line - a function that draws a straight line
 * @n: integer input
 *
 * Return: always 0
 */
void print_line(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
			_putchar('_');
	}

	_putchar('\n');
}
