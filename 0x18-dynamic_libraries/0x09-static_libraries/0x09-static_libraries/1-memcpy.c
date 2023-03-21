#include "main.h"

/**
 * _memcpy - this fuct copies a mem address
 * @dest: first param
 * @src: second param
 * @n: Third param
 * Return: returs a string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(dest + a) = *(src + a);
	}
	return (dest);
}
