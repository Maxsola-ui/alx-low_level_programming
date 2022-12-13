#include "main.h"

/**
 *  print_alphabet_x10 - check the code
 *  Return: Always 0 if there is no error.
 */

void print_alphabet_x10(void)
{
	char c = 'a';

	for (char c = 0; c <= 10; c++)
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
