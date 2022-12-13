#include "main.h"

/**
 * _islower- check the code c
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar('1');
		return (1);
	}
	_putchar('0');

	return (0);
}
