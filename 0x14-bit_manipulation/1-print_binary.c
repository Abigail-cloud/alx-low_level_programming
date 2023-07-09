#include "main.h"

/**
 * print_binary - logic to prints the binary rep of a number
 * * @n: number
 *
 */
void print_binary(unsigned long int n)
{
	int bin;

	if (n >> 1)
		print_binary(n >> 1);
	bin = n & 1;
	putchar(bin + '0');
}
