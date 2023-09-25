#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: strings to check
 * @c: character to find
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

			if (*s == c)
		{
			return (s);
		}
	}
			return (0);
}
