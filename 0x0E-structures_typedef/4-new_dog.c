#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * _strlen - returns length of string
 * @p:string evaluated
 * Return:length of string
 */
int _strlen(char *p)
{
	int i;

	i = 0;


	while (p[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - copies string pointed by src, also terminates null byte.
 * @dest:pointer to buffer which string is copied
 * @src:string copied
 * Return:pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
