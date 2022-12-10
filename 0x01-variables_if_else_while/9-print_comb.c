#include <stdio.h>
/**
 * main - main function
 *
 * Return: combination og sigle digits
 */
int main(void)
{
		int x = '0';

		while (x <= '9')
		{
			putchar(x);
			if (x != '9')
			{														putchar(',');
				putchar(' ');											}
			x++;
		}

		putchar(10);
		return (0);
}
