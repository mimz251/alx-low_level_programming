#include "main.h"
/**
 *_memset - function that fills memory with a constant byte.
 * @s: const 1
 * @b: const 2
 * @n: byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num4 = 0;

	while (num4 < n)
	{
		s[num4] = b;
		num4++;
	}
	return (s);
}
