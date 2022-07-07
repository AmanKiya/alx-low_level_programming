#include "main.h"

/**
 * more_numbers - a function that prints 10 times numbers
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i <= 10)
	{
		j = 0
		while (j <= 14)
		{
			if (j > 9)
				_putchar((num / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
