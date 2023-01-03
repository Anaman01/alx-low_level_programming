#include "main.h"

/**
 * _strpbrk - This function searches for any string of a set of bytes
 * @s: string param
 * @accept: param 2
 * Return: returns a string
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
