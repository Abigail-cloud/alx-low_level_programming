#include "main.h"
/**
 * *_memcpy - copies memory area
 *
 *  @dest: destination is the memory area
 * @src: memory area to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int x;

		for (x = 0; x < n; x++)
		{
			*(dest + x) = *(src + x);
		}
		return (dest);
}
