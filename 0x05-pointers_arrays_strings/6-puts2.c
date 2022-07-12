#include "main.h"

/**
 * puts2 - a fimctopm that prints every other characters of a string
 * @str: pointer str
 * Return: always 0
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
