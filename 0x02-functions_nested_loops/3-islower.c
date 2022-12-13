#include "main.h"

/**
 * maiin- check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int n, c;

	c = 0;
	while (c <= 10)
	{
		for (n = 'a'; n <= c; n++)
		{
			_putchar(n);
		}

		c++;

		_putchar("0\n");
	}
}
