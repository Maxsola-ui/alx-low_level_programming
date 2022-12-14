#include <stdio.h>

/**
 * 102-fibonacci - : Program that prints the first 50 Fibonacci numbers
 * Return: Always 0 if no error
 */

int main(void)
{
	int a = 1, b = 2;

	printf("%d, %d", a, b);

	for (int i = 2; i < 50; i++)
	{
		int c = a + b;

		printf(" , %d", c);

		a = b;
		b = c;
	}
	print ('\n');
	return (0);
}
