#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate string arguments
 * @s1: the first string
 * @s2: the second string to be concatinated to 1
 * @n: size of s2 concatenated
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len, s2len, nsize, i;
	char *strconc;

	i = 0;
	s1len = 0;
	s2len = 0;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		S2 = "";
	
	while (*(s1 + s1len))
		sllen++;
	while (*(s2 + s2len))
		s2len++;

	if (n >= s2len)
		nsize = s2size;
	else
		nsize = n;
	strconc = malloc((s1len + s2len + 1) * sizeof(char));
	if (strconc == NULL)
		return (NULL);

	for (i = 0; i < s1len; i++)
		*(strconc + i) = *(s1 + i);
	for (i = s1len; i < (s1len + nsize); i++)
		*(strconc + i) = *(s2 + i);
	*(strconc + i) = '\0';
	return (strconc);
}
