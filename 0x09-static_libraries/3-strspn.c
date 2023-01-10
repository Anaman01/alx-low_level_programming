#include "main.h"

/**
 * _strspn - This function searches a string for a set of bytes
 * @s: string param
 * @accept: second param
 * Return: return number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
			b++;
		}
		a++;
	}
	return (t);
}
