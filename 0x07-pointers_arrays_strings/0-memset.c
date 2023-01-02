#include <main.h>

/**
 * _memset - a function that fills memory with a constant byte
 * fills the first n bytes of the memory area pointed by s
 * with a constant b
 * @s: Input pointer to char type which represents the pointer to the block
 * of the memory to fill
 * @b: input variable of char type represents the character to fill s
 * @n: Unsigned int variable the number of bytes to be filled
 * Return: A pointer to the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * declare an unsigned int because we are storing a value
	 * that will always be non-negative (zero or positive)
	 */

	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
