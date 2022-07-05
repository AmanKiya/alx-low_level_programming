#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @num: integer input
 *
 * Return: the value of the last digit
 */
int print_last_digit(int num)
{
	int n;

	n = (num % 10);

	if (n < 0)
	{
		n = (-1 * n);
	}

	_putchar(n + '0');
	return (n);
}
