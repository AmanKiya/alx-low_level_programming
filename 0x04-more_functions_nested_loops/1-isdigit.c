#include "main.h"

/**
 * _isdigit - checks for characters that are digits
 * @c: character to check
 * Description: define if a character is a number
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	int result;

	if (c >= '0' && c <= '9')
		result = 1;

	else
		result = 0;

	return (result);
}
