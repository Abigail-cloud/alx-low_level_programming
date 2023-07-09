#include "main.h"

/**
 * get_endianness - is it endianness.
 * Return: 0 if big endianess
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
