#include "main.h"
/**
 * _strstr - finds the  occurrence of the substring needle in the hatstack.
 * @needle: substring
 * @haystack: actual string
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *f = needle;

		while (*h == *f && *f != '\0')
		{
			h++;
			f++;
		}

		if (*f == '\0')
			return (haystack);
	}
	return (0);
}
