#include "main.h"
#include <stdio.h>
/**
 * swap_int - a function that swaps the values of two integers
 * @b: swap b
 * @a: swap a
 * Return - nothing
 */
void swap_int(int *a, int *b)
/* a function that swaps the values of two integers*/
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
