#include "main.h"

/**
 * print_times_table - function that prints the 'n' times table, start with 0.
 * @n: parameter used
 * Return: Always 0 if no error
 */

void print_times_table(int n)
{
	for (int i = 0; i <= 12; i++)
	{
		_putchar("%d * %d = %d\n", n, i, n * i);
	}
	return (0);
}
