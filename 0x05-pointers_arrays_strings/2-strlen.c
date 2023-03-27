#include <stdio.h>
#include "main.h"
/**
 * _strlen -  a function that returns the length of a string.
 * @s: size of the string
 *Return: length of string
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
