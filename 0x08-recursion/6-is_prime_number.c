#include "main.h"

/**
 * evaluate_num - Recursion loop
 * @num: Number
 * @iterator: Number to iterate
 * Return: Return 1 or 0
 */

int evaluate_num(int num, int iterator)
{
	if (iterator == num - 1)
	{
		return (1);
	}

	else if (num % iterate == 0)
	{
		return (0);
	}

	if (num % iterator != 0)
	{
		return (evaluate_num(num, iterator + 1));
	}

	return (0);
}
/**
 * is_prime_number - Evaluate prime or not
 * @num: Number
 * Return: Return 1 prime and return 0 otherwise
 */
int is_prime_number(int num)
{
	int iterator;

	iterator = 2;

	/* only greater than 2 */
	if (num < 2)
	{
		return (0);
	}

	if (num == 2)
	{
		return (1);
	}

	return (evaluate_num(num, iterator));
}
