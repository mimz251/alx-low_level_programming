#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.


 * Return: 0 (Success)
 */

int main(void)

{
	int d;

	for (d = '0'; d <= '9'; d++)

	putchar(d);
	putchar('\n');
	return (0);
}
