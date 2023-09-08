#include <stdio.h>

/**
 * main - Task 2
 * Description - prints alphabets in lower case
 *
 * Return: Always (0)
 */
int main(void)
{
	char afabets;

	for (afabets = 'a'; afabets <= 'z'; afabets++)
		putchar(afabets);
	putchar('\n');
	return (0);
}
