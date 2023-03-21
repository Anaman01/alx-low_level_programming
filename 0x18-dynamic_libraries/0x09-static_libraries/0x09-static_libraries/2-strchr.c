#include "main.h"
#include <stdio.h>

/**
 * _strchr - This function is a character string
 * @s: first param
 * @c: second parameter
 * Return: returns a string
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (!c)
	{
		return (s);
	}
	return (NULL);
}
