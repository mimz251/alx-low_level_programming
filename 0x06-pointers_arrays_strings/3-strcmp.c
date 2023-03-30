#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: A pointer to the first string compared
 * @s2: A pointer to the second string compared
 * Return: the negative difference if str1 < str2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
