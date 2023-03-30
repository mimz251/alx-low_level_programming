#include "main.h"

/**
 * _strncpy - copies an inputed number fro src to dest
 * @dest: stores copy
 * @src: source
 * @n: max number of bytes copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
