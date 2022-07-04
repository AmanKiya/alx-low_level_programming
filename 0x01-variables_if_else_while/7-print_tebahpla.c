#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 on success
 */
int main(void)
{
	char ltr;

	for (ltr = 'z'; ltr >= 'a'; ltr--)
		putchar(ltr);
	putchar('\n');
	return (0);
}
