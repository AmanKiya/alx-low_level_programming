#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: given integer
 *
 * Return: -1 to indecate an error if n is negative and 0 for n equals 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
