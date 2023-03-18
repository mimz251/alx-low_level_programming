#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point.
 * Return: 0 (success)
 */

int main(void)

{
	char lw;

	for (lw = 'a'; lw <= 'z'; lw++)
	putchar(lw);

	for (lw = 'a'; lw <= 'Z'; lw++)
	putchar(lw);
	putchar('\n');

	return (0);
}
