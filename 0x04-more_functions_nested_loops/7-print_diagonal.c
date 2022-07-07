#include "main.c"

/**
 * print_diagonal - a function that draws a diagonal line
 * @n: integer input
 *
 * Return: always 0
 */
void print_diagonal(int n)
{
	int leng;

	if (n > 0)
	{
		for (leng = 0; leng < n; leng++)
			_putchar(' ');
		_putchar('\\');
	}

	_putchar('\n');

}
