#include <stdio.h>

/**
 * main - Task 3
 * Description - lowercase and uppercase
 *
 * Return: 0;
 */
int main(void)
{
	char afabets;

	for (afabets = 'a'; afabets <= 'z'; afabets++)
		putchar(afabets);
        for (afabets = 'A'; afabets <= 'Z'; afabets++)
		putchar(afabets);
	putchar('\n');

	return (0);
}
