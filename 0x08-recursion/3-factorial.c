#include "main.h"

/**
 * factorial - returns the length of a string
 *
 * @n: int parameter
 *
 * Return: int
 */

int factorial(int n)
{
		if (n < 0)
		{
			return (-1);
		}
		if (n > 0)
		{
			return (n * factorial(n - 1));
		}
		return (1);
}
