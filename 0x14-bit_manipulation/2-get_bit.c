#include "main.h"

/**
 * get_bit - logs a value of a bit at a given index.
 * @n: number
 * @index: index position
 *
 * Return: bit index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bin;

	bin = (sizeof(n) * 8);
	if (index < bin)
	{
		return (((1 << index) & n) >> index);
	}
	return (-1);
}
