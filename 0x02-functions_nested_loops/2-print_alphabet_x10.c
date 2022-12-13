#include "main.h"

/**
 *  Main - check the code for the function that prints 10 times alphabets
 *
 *  Return: Always 0 if there is no error.
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

	print_alphabet_x10();
	return (0);
}

