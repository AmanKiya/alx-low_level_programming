#include "main.h"

/**
 * _islower - checks for the lowercase character
 * @c: a character to bechecked
 *
 * Return: 1 if c is lowercase
 * Otherwise, 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
