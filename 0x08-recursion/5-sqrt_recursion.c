#include "main.h"

/**
 * _sqrt_recursion - a function that returns a natural square root of a number
 * @n: integer parameter n
 *
 * Return: -1 for n not having a natural logarithm
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_manual_calc(n, 1));
	}
}

/**
 * sqrt_manual_calc - number's square calculation manually
 * @n: natural number
 * @i: number to be multiplied
 *
 * Return: sqrt 0 if sqrt is not natural
 */
int sqrt_manual_calc(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_manual_calc(n, i + 1));
	}
}
