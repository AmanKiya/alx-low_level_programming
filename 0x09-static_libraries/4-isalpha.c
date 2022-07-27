#include "main.h"

/**
 * _isalpha - ckecks for alphabetic character
 * @c: a character to checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * Otherwise 0
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
