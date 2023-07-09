#include "main.h"

/**
 * flip_bits - flip number to opposite.
 * @m: other number
 * @n: number
 *
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = 0,
		      flipped = 0;

	num = n ^ m;
	while (num)
	{
		if (num & 1)
			flipped++;
		num = num >> 1;
	}
	return (flipped);
}
