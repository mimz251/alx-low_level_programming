#include "main.h"
#include <stdio.h>
/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, p = 0;
	unsigned long int space;
	unsigned long int ora = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		space = ora >> j;
		if (space & 1)
			p++;
	}

	return (p);
}
