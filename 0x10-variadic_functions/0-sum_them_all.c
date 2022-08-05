#include <stdarg.h>
#include "variadic_function.h"
/**
 * sum_them_all - sum all
 * @n: given number
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	var_list arguments;

	var_start(argumens, n);

	for (i = 0; i < n; i++)
		sum = sum + var_arg(arguments, int);

	va_end(arguments);
	return (sum);
}
