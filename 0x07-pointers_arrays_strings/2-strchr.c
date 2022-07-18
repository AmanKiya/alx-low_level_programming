#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: pointer s for a string
 * @c: character parameter
 * Return: a pointer to the first occurrence of the character c or
 * Null if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' )
	{
		if (*s ==c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
