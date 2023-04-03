#include "main.h"
/**
 * _memcpy -  function that copies memory area.
 * @dest: storage
 * @src: copied memory
 * @n: num of bytes
 * Return:
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int g = 0;
	int i = n;

	for (; g < i; g++)
	{
		dest[g] = src[g];
		n--;
	}
	return (dest);
}
