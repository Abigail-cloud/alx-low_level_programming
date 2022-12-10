#include <stdio.h>
/**
 * main - entry function
 *
 * Return: conbinationbs of two digits
 */
int main(void)
{
		int a = 0;
		int b = 0;
		int sep = 1;

		while (a <= 9)
		{
			while (b <= 9)
			{
				if (a < b)
				{
					if (sep == 0)
					{
					putchar(',');
					putchar(32);
					}
				sep = 0;
				putchar(a + '0');
				putchar(b + '0');
				}
				++b;
			}
			++a;
			b = 0;
		}
		putchar(10);

		return (0);
}
