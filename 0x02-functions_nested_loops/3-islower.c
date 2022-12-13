#include "main.h"

/**
 * _islower- check the code c
 *
 * Return: Always 0.
 */

int _islower(int c)
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

		_putchar('\n');
	}
}
