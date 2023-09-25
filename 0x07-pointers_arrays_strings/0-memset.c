#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: start address of memory to be filled
 * @b: the ideal value
 * @n: bytes to be changed
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int y = 0;

	for (; n > 0; y++)
	{
		s[y] = b;
		n--;
	}
	return (s);
}
