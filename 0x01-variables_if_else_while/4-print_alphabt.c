#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - returns alphabets both except e ad q
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
