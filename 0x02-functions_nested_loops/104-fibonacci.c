#include <stdio.h>;

/**
 *  *main - prints the first 98 fibonacci sequences
 *  Return: 0
 */

int main(void)
{

int a = 1, b = 2;
printf("%d, %d", a, b);

for (int i = 2; i < 98; i++)
{
int c = a + b;
printf(" , %d", c);
a = b;
b = c;
}
printf('\n');
return (0);
}
