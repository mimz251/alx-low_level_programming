#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Write a program that prints the lowercase alphabet in reverse, followed by a new line.
 * Return: 0 (Success)
 */
int main(void)

{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	{
	putchar(low);
	}

	putchar('\n');
	return (0);
}
