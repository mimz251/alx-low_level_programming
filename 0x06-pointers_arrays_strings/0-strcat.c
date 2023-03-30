#include <stdio.h>
#include "main.h"
/**
 * _strcat - cocatenates two strings
 * @dest: where the string goes
 * @src: source
 *Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;
	{
		dlen++
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
			dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
