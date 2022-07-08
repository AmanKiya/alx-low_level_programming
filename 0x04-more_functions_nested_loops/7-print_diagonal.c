#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line
 * @n: integer input
 * Description: prints diagonals
 * Return: always 0
 */
void print_diagonal(int n)
{
	int leng, space;
	
	if (n > 0)
	{
		for (leng = 0; leng < n; leng++)
		{
			for (space = 0; space < leng; space++)
				_putchar(' ');
			_putchar('\\');

			/**
			 * if (leng == n - 1)
			 * continue;
			 */
			_putchar('\n');
		}
	}
	_putchar('\n');

}
