#include "main.h"
/**
 * _sqrt - function decription
 * @x: first parameter int
 * @y: second parameter int
 * Return: sum of the values
 */
int _sqrt(int x, int y)
{
		int sum;

		sum = x - y;
		if (sum < 0)
			return (-(y / 2) - 1);
		if (sum == 0)
			return (1);
		else
			return (1 + _sqrt(sum, y + 2));
}
/**
 * _sqrt_recursion - the natural square root
 * @n: radical root number
 * Return: the result
 */
int _sqrt_recursion(int n)
{
		if (n < 0)
			return (-1);
		if (n == 0)
			return (0);
		if (n == 1)
			return (1);
		return (_sqrt(n, 1));
}
