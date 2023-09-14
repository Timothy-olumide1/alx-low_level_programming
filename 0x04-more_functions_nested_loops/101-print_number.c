#include "main.h"
void print_integer(int m);

/**
 * print_number - prints an integer
 * @n: An input integer
 * Return: 0
 */

void print_number(int n)
{

	unsigned int k = n;
	if (n < 0)
	{
	n *= -1;
	k = n;
	_putchar('-');
	}
	k /=10;
	if (k != 0)
	pint_number(k);
	_putchar((unsigned int) n % 10 + '0');
}
