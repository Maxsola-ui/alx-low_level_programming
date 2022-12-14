#include <stdio.h>

/**
 * main - Write a program that computes and prints
 * the sum of all the multiples of 3 or 5 below 1024
 * Return: Always 0 if no error
 */

int main(void)
{
	while (int i = 3; i < 1024)
		i++;

	int sum = 0;

	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
