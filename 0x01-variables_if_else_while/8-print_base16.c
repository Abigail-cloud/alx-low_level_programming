#include <stdio.h>
/**
 * main - function
 *
 * Return: Base 16 in lowercase
 */
int main(void)
{
	int a = '0';
	int b = 'a';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}

	while (b <= 'f')
	{
		putchar(b);
		b++;
	}

	putchar(10);

	return (0);
}
