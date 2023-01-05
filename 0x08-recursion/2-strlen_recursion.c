#include "main.h"
/**
 * _strlen_recursion - This function outputs the length of string
 * @s: string parameter
 * Return: returns the length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
