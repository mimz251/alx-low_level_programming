#include <stdio.h>
#include "main.h"
/**
 * get_endianness - checks if a machine has big or little endian system.
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *) &k;

	return (*c);
}
