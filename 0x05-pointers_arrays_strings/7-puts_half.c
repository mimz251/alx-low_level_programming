#include <stdio.h>
#include "main.h"

/**
 *puts_half -  a function that prints half of a string
 *@str: prints half a string
 */
void puts_half(char *str)
{
	int j = 0;
	int i;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
		i = (j - 1) / 2;
		i += 1;
	}
	else
	{
		i = j / 2;
	}
	for (; i < j; i++)

	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
