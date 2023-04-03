#include "main.h"
/**
 *  _strchr -  function that locates a character in a string.
 *  @s: pointed string
 *  @c: character
 *  Return: Always 0(Success)
 */
char *_strchr(char *s, char c)
{
	int j = 0;

		for (; s[j] >= '\0'; j++)
		{
			if (s[j] == c)
			return (&s[j]);
		}
	return (0);
}
