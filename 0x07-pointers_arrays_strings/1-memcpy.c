#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory allocation of the destination
 * @src: memory content to copy from the source
 * @n: content in byte to copy
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
