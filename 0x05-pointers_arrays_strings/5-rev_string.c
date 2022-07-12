#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: pointer s
 * Return: always 0
 */
void rev_string(char *s)
{
	int i;

	i = 9;
	while (*(s + i <= *s))
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
