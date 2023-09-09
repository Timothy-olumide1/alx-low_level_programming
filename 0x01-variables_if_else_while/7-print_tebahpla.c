#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Task 7
 * Description - lower case in reverse
 *
 * Return: 0;
 */

int main(void)
{
	char afabets;

	for (afabets = 'z'; afabets >= 'a'; afabets--)
	{
		putchar(afabets);
	}
	putchar('\n');

	return (0);
}
