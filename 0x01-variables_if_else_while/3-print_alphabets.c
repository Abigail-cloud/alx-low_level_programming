#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Prints the alphabet in lower uppercase
 */
int main(void)
{
		char low;
		char UP;

		for (low = 'a'; low <= 'z'; ++low)
			printf("%c", low);

		for (UP = 'A'; UP <= 'Z'; ++UP)
			printf("%c", UP);

		printf("\n");

		return (0);
}
