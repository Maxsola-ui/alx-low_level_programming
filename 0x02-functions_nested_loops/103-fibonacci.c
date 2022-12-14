#include <stdio.h>

/**
 * 103-fibonacci - Generate fibonacci sequence  by adding the previous 2 terms
 * Return: Always 0 if no error
 */

int main(void)
{
	int a = 1, b = 2;
	int sum = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}
		int c = a + b;

		a = b;
		b = c;
	}
	printf("%d\n", sum);
	return (0);
}
