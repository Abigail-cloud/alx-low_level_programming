#include "main.h"

/**
 * set_bit -  set value of a bit to 1 at a given index.
 * @index: index
 * @n: number
 *
 * Return: bit in Index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bin;

	bin = (sizeof(*(n)) * 8);
	if (index < bin)
	{
		*(n) = ((1 << index) | *(n));
		return (1);
	}
	return (-1);
}
