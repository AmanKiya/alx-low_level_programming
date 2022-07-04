#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
		if (ltr != 'e' && ltr != 'q')
			putchar(ltr);
	putchar('\n');

	return (0);
}
