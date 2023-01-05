#include "main.h"
/**
 * factorial - gets the factorial of a number
 * @n: integer
 * Return: returns the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
