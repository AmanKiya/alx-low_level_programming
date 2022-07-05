#include "main.h"

/**
 * main - Entry point
 *
 * Return: always 0 on success
 */
int main(void)
{
	char *pc = "_putchar";
	
	while (*pc)
	{
		_putchar(*pc);
		pc++;
	}
	_putchar('\n');

	return (0);
}
