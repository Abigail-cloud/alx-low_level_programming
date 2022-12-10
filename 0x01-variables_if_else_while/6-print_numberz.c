#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Base 10 in sequence
 */
int main(void)
{
		int n;

		for (n = '0'; n <= '9'; ++n)
			putchar(n);

		putchar(10);

		return (0);
}
