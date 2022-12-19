#include <unistd>

/**
 * _putchar - writes the character c to thr stdout
 * @c: the character to print
 * Return: on success 1
 * On error, -1 is returned, and error is set appripraitely
 */

int _puthar(char c)
{
	return (write(1, &c, 1));
}
