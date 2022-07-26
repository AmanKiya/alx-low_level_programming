#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of string given as a parameter
 * @str: character pointer
 * Return: null if str = null
 */
char *_strdup(char *str)
{
	int strSize, i;
	char *copyStr;

	strSize = 0;
	if (str == NULL)
		return (NULL);
	while (*(str + strSize))
		strSize++;
	strSize++; /* add 1 to print NULL*/
	copyStr = malloc((strSize) * sizeof(char));
	if (copyStr == NULL)
		return (0);
	for (i = 0; i < (strSize); i++)
		*(copyStr + i) = *(str + i);
	return (copyStr);
}
