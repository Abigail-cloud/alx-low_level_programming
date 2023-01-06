#include "main.h"
/**
 * is_prime - Find the prime number
 * @x: first int parameter
 * @y: second int parameter
 * Return: 0 and the prime 1
 */
int is_prime(int x, int y)
{
		if ((x % y) == 0 && y < x)
			return (0);
		if (x == y)
			return (1);
		else
			return (is_prime(x, y + 1));
}
/**
 * is_prime_number - check and confirm the prime number
 * @n: the int
 * Return: 0 and the prime 1
 */
int is_prime_number(int n)
{
		if (n <= 1)
			return (0);
		return (is_prime(n, 2));
}
