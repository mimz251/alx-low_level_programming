#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @src: string to be added
 * @dest:the string to be added on
 * @n: number of byte from src
 * Return: pointer to the dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
