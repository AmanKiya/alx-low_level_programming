#include "main.c"

/**
 * _puts - a function that prints a string
 * @str: pointer str
 * Return: always 0
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		printf("'%c'", *(str + i));
		i++;
	}

}
