#include "main.h"
/**
 *  abs - function to get the absolute value
 *
 * @n: parameter of the funtion
 *
 * Return: the absolute value
 */
int abs(int n)
{
		if (n > 0)
		{
			return (n);
		}
		else if (n == 0)
		{
			return (0);
		}
		else
		{
			return (-n);
		}
}
