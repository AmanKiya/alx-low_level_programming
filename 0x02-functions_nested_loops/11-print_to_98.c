#include "main.h"

/**
 * print_to_98 - a function that prints all natural from n to 98, followed by a new line
 * @n: the integer input
 *
 * Return: always 0
 */
void print_to_98(int n)
{
	int num;

	for (num = n; num <= 98; num++)
	{
		_putchar('0' + num);
		_putchar(',');
		_putchar(' ');
	}

	_putchar('\n');
	return (0);
}
