#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 * @c: The character is computed
 * Return:absolute value of number or zero
 */
int _abs(int c)
{
	if (c < 0)
		c = -(c);
	else if (c >= 0)
		c = (c);
	return (c);
}
