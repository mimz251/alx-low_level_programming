#include "main.h"
/**
 *_islower - a function that checks for lowercase character.
 * @c: it is the function to be printed
 *Return: 1 for lowercase character or 0 for anything else
 */
int _islower(int c)
{



	if (c >= 97 && c <= 122)
	{

	return (1);
	}

	return (0);
}
