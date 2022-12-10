#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Prints the alphabet in lower uppercase
 */
int main(void)
{
		char c;

		for (c = 'a'; c <= 'z'; ++c)
		{
			if (c != 'e' && c != 'q')
			{													putchar(c);												}
		}

		printf("\n");

		return (0);
}
