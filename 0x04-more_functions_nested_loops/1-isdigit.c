#include "main.h"

/**
 * _isdigit - a function that checks for a digit 
 * @c: integer input
 *
 * Return: 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
