#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural from n to 98, 
 * Followed by a new line
 * @n: the integer input
 *
 * Return: always 0
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
